/* Copyright (c) David Cohrs, 1992				  */
/* NetHack may be freely redistributed.  See license for details. */

#ifndef WINPROCS_H
#define WINPROCS_H

extern struct window_procs windowprocs;

/*
 * If you wish to only support one window system and not use procedure
 * pointers, add the appropriate #ifdef below.
 */

extern void nh_delay_output(void);

#define player_selection (*windowprocs.win_player_selection)
#define get_nh_event (*windowprocs.win_get_nh_event)
#define exit_nhwindows (*windowprocs.win_exit_nhwindows)
#define suspend_nhwindows (*windowprocs.win_suspend_nhwindows)
#define resume_nhwindows (*windowprocs.win_resume_nhwindows)
#define create_nhwindow (*windowprocs.win_create_nhwindow)
#define clear_nhwindow (*windowprocs.win_clear_nhwindow)
#define display_nhwindow (*windowprocs.win_display_nhwindow)
#define destroy_nhwindow (*windowprocs.win_destroy_nhwindow)
#define curs (*windowprocs.win_curs)
#define putstr (*windowprocs.win_putstr)
#define display_buffer (*windowprocs.win_display_buffer)

#define display_menu (*windowprocs.win_display_menu)
#define display_objects (*windowprocs.win_display_objects)

#define message_menu (*windowprocs.win_message_menu)
#define update_inventory (*windowprocs.win_update_inventory)
#define mark_synch (*windowprocs.win_mark_synch)
#define wait_synch (*windowprocs.win_wait_synch)
#define print_glyph (*windowprocs.win_print_glyph)
#define raw_print (*windowprocs.win_raw_print)
#define raw_print_bold (*windowprocs.win_raw_print_bold)
#define nhgetch (*windowprocs.win_nhgetch)
#define nh_poskey (*windowprocs.win_nh_poskey)
#define nhbell (*windowprocs.win_nhbell)
#define nh_doprev_message (*windowprocs.win_doprev_message)
#define getlin (*windowprocs.win_getlin)
#define get_ext_cmd (*windowprocs.win_get_ext_cmd)
#define number_pad (*windowprocs.win_number_pad)
#define delay_output nh_delay_output

/* other defs that really should go away (they're tty specific) */
#define start_screen (*windowprocs.win_start_screen)
#define end_screen (*windowprocs.win_end_screen)

#define outrip (*windowprocs.win_outrip)


#define ALIGN_LEFT	1
#define ALIGN_RIGHT	2
#define ALIGN_TOP	3
#define ALIGN_BOTTOM	4

/* player_selection */
#define VIA_DIALOG	0
#define VIA_PROMPTS	1


struct wc_Opt {
	const char *wc_name;
	unsigned long wc_bit;
};

#endif /* WINPROCS_H */
