#
# Regular cron jobs for the libfyba package
#
0 4	* * *	root	[ -x /usr/bin/libfyba_maintenance ] && /usr/bin/libfyba_maintenance
