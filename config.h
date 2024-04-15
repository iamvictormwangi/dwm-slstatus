/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 3200;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

// 

static const struct arg args[] = {
  { run_command,    " %s ",     "mpc current | cut -c 1-20" },
  { run_command,    " %s ",     "df -h / | awk 'NR==2{print $5}'" },
  { cpu_perc,       " %s%% ",   NULL },
  { ram_used,       "󰾅 %s ",     NULL },
  { run_command,    " %s ",     "amixer get Master | grep -oE '[0-9]{1,3}%'" },
  { run_command,    " %s ",     "amixer get Capture | grep -oE '[0-9]{1,3}%' | head -n 1" },
  // { run_command,    "󰝩 %s% ",    "xbacklight -get" },
  { run_command,    "%s ",       "check-online" },
  { run_command,    "󰔄 %s ",     "temperature" },
  { run_command,    "%s ",       "curr-time" },
};

