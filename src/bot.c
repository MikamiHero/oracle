#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// See cogmaster/concord on github
#include <concord/discord.h>
#include <concord/log.h>

/* Ready to log when Oracle is ready and connected */
void
on_ready(struct discord *client, const struct discord_ready *event)
{
    log_info("Channel-Bot succesfully connected to Discord as %s#%s!",
             event->user->username, event->user->discriminator);
}

int
main(int argc, char *argv[])
{
    // Reading in the config file
    const char *config_file;
    if (argc > 1)
        config_file = argv[1];
    else
        config_file = "./config.json";

    // Initialise bot
    ccord_global_init();
    struct discord *client = discord_config_init(config_file);
    assert(NULL != client && "Could not initialize client");

    discord_set_on_ready(client, &on_ready);
    discord_run(client);

    discord_cleanup(client);
    ccord_global_cleanup();
}