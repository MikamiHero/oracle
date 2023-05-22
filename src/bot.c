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
    return 0;
}