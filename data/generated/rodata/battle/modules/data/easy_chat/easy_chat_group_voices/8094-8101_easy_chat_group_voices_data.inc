	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8754B3
gText_Rom_8754B3: @ 0x088754B3
	.string "………$"
	.if (. - gText_Rom_8754B3) > 0x4
	.error "gText_Rom_8754B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8754B3) < 0x4
	.space 0x4 - (. - gText_Rom_8754B3)
	.endif
	@ analyzed canonical ROM range 0x088754B7-0x088754D5
sAnalyzedData_088754B7: @ 0x088754B7
	@ pass3: M4A audio region; proven headers/tracks are labeled below
	.byte 0xB0, 0xB0, 0xB0, 0xA4, 0xBE, 0x28, 0xEB, 0x39, 0x40, 0x86, 0xBE, 0x2F, 0x86, 0x34, 0x83, 0x3B
	.byte 0x83, 0x42, 0x83, 0x45, 0x83, 0x49, 0x83, 0x4C, 0x83, 0x50, 0x86, 0xFF, 0x3B, 0x5C, 0xB0
	.globl gText_Rom_8754D6
gText_Rom_8754D6: @ 0x088754D6
	.string "………$"
	.if (. - gText_Rom_8754D6) > 0x4
	.error "gText_Rom_8754D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8754D6) < 0x4
	.space 0x4 - (. - gText_Rom_8754D6)
	.endif
	@ analyzed canonical ROM range 0x088754DA-0x08876034
sAnalyzedData_088754DA: @ 0x088754DA
	@ pass3: M4A audio region; proven headers/tracks are labeled below
	.byte 0xB0, 0xFF, 0xB0, 0xFF, 0xB0, 0xF3, 0xA4, 0xBE, 0x28, 0xEB, 0x39, 0x40, 0x86, 0xBE, 0x2F, 0x86
	.byte 0x34, 0x83, 0x3B, 0x83, 0x42, 0x83, 0x45, 0x83, 0x49, 0x83, 0x4C, 0x83, 0x50, 0x86, 0xB2, 0xA3
	.byte 0x54, 0x87, 0x08, 0xB1

	.globl SongTrack_MUS_ROUTE110_09
SongTrack_MUS_ROUTE110_09: @ 0x088754FE
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_vol 0x50
	m4a_wait 0x8C @ W12
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x28, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0xA0 @ W48
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x08875505
	m4a_patt 0x08875505
	m4a_patt 0x08875505
	m4a_note_key_vel 0xD5, 0x28, 0x50 @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_note_key_vel 0xD5, 0x28, 0x50 @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x08875522
	m4a_patt 0x08875540
	m4a_patt 0x08875522
	m4a_patt 0x08875540
	m4a_patt 0x08875522
	m4a_note_key_vel 0xD5, 0x28, 0x50 @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0xA0 @ W48
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_goto 0x08875505
	m4a_fine
	.globl SongHeader_MUS_ROUTE110
SongHeader_MUS_ROUTE110: @ 0x08875598
	@ M4A song header: song 360 (MUS_ROUTE110)
	m4a_song_header 9, 0, 0, 0xB2, 0x085FEC58
	.4byte SongTrack_MUS_ROUTE110_01
	.4byte SongTrack_MUS_ROUTE110_02
	.4byte SongTrack_MUS_ROUTE110_03
	.4byte SongTrack_MUS_ROUTE110_04
	.4byte SongTrack_MUS_ROUTE110_05
	.4byte SongTrack_MUS_ROUTE110_06
	.4byte SongTrack_MUS_ROUTE110_07
	.4byte SongTrack_MUS_ROUTE110_08
	.4byte SongTrack_MUS_ROUTE110_09

	.globl SongTrack_MUS_ROUTE120_01
SongTrack_MUS_ROUTE120_01: @ 0x088755C4
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x43
	m4a_voice 0x51
	m4a_vol 0x50
	m4a_note_key_vel 0xFC, 0x2D, 0x50 @ N88
	m4a_wait 0xB0 @ W96
	m4a_note 0xFF @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xF7, 0x2B @ N72
	m4a_wait 0xAB @ W80
	m4a_voice 0x53
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note 0xFF @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xFC, 0x29 @ N88
	m4a_wait 0xB0 @ W96
	m4a_note 0xFF @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xFC, 0x28 @ N88
	m4a_wait 0xB0 @ W96
	m4a_note 0xFF @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xDB, 0x2D, 0x50 @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088755E9
	m4a_note_key_vel 0xDB, 0x2B, 0x50 @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088755F9
	m4a_note_key_vel 0xDB, 0x29, 0x50 @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x08875609
	m4a_note_key_vel 0xDB, 0x28, 0x50 @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDF, 0x2F @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x28 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2C @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_voice 0x53
	m4a_note_key_vel 0xEB, 0x2D, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE8 @ N28
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xEB, 0x2C, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x31 @ N16
	m4a_wait 0x90 @ W16
	m4a_pend
	m4a_voice 0x53
	m4a_note_key_vel 0xEB, 0x2B, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE8 @ N28
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xEB, 0x2A, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x32 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2F @ N16
	m4a_wait 0x90 @ W16
	m4a_pend
	m4a_voice 0x53
	m4a_note_key_vel 0xEB, 0x29, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE8 @ N28
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xEB, 0x28, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x31 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2D @ N16
	m4a_wait 0x90 @ W16
	m4a_pend
	m4a_voice 0x53
	m4a_note_key 0xEB, 0x2A @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note_key 0xDB, 0x2D @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2C @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2A @ N16
	m4a_wait 0x90 @ W16
	m4a_voice 0x53
	m4a_note_key 0xEB, 0x28 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2A @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2C @ N16
	m4a_wait 0x90 @ W16
	m4a_patt 0x0887562E
	m4a_patt 0x0887563D
	m4a_patt 0x0887564D
	m4a_patt 0x0887565C
	m4a_patt 0x0887566C
	m4a_patt 0x0887567B
	m4a_voice 0x53
	m4a_note_key_vel 0xE8, 0x34, 0x50 @ N28
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xEA @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x34 @ N48
	m4a_wait 0xA0 @ W48
	m4a_voice 0x51
	m4a_note_key 0xDB, 0x28 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2A @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2C @ N16
	m4a_wait 0x90 @ W16
	m4a_goto 0x088755C6
	m4a_fine
	.globl SongTrack_MUS_ROUTE120_02
SongTrack_MUS_ROUTE120_02: @ 0x088756EE
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x3C
	m4a_vol 0x50
	m4a_pan 0x37
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x4C, 0x60 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4A @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEE, 0x43 @ N44
	m4a_wait 0x92 @ W18
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_vol 0x49
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_mod 0x00
	m4a_note_key 0xDB, 0x47 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x49 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x4A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEA, 0x47 @ N32
	m4a_wait 0x92 @ W18
	m4a_vol 0x49
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xEB, 0x45 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xE7, 0x43 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xFA, 0x45 @ N80
	m4a_wait 0x98 @ W24
	m4a_vol 0x50
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_mod 0x05
	m4a_wait 0x83 @ W03
	m4a_vol 0x3F
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_vol 0x0D
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x02 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xDB, 0x41 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x43 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x48 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x47 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEE, 0x47 @ N44
	m4a_wait 0x92 @ W18
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_vol 0x49
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_mod 0x00
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x48 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xFE, 0x47 @ N92
	m4a_wait 0x98 @ W24
	m4a_vol 0x50
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_mod 0x05
	m4a_wait 0x83 @ W03
	m4a_vol 0x3F
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x41 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4B @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_vol 0x4D
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_voice 0x38
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x4C, 0x6C @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x4A @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE3, 0x47 @ N20
	m4a_wait 0x8C @ W12
	m4a_mod 0x04
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xE3, 0x49 @ N20
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4A @ N20 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4C @ N20 (running status)
	m4a_wait 0x88 @ W08
	m4a_mod 0x04
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x84 @ W04
	m4a_tie_key 0x47 @ TIE
	m4a_wait 0xA0 @ W48
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_vol 0x50
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x81 @ W01
	m4a_vol 0x34
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x02 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_pend
	m4a_eot_key 0x47
	m4a_mod 0x00
	m4a_wait 0x88 @ W08
	m4a_voice 0x2E
	m4a_vol 0x50
	m4a_pan 0x29
	m4a_note_key_vel 0xD3, 0x43, 0x2C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5B @ N04 (running status)
	m4a_wait 0x98 @ W24
	m4a_voice 0x38
	m4a_pan 0x36
	m4a_note_key_vel 0xE7, 0x4D, 0x6C @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x4F @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4D @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE3, 0x4C @ N20
	m4a_wait 0x8C @ W12
	m4a_mod 0x04
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xE3, 0x4A @ N20
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N20 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4D @ N20 (running status)
	m4a_wait 0x88 @ W08
	m4a_mod 0x04
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x84 @ W04
	m4a_tie_key 0x4C @ TIE
	m4a_wait 0xA0 @ W48
	m4a_mod 0x05
	m4a_wait 0x98 @ W24
	m4a_vol 0x50
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_patt 0x088757EB
	m4a_eot_key 0x4C
	m4a_mod 0x00
	m4a_wait 0x88 @ W08
	m4a_voice 0x2E
	m4a_vol 0x50
	m4a_pan 0x28
	m4a_note_key_vel 0xD3, 0x47, 0x2C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x38
	m4a_pan 0x37
	m4a_note_key_vel 0xE8, 0x45, 0x6C @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x50 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xFB, 0x4C @ N84
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_wait 0x86 @ W06
	m4a_vol 0x47
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x06 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_wait 0x8C @ W12
	m4a_vol 0x50
	m4a_note 0xE8 @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x51 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x49 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xFB, 0x4A @ N84
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_wait 0x86 @ W06
	m4a_vol 0x47
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x06 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_wait 0x8C @ W12
	m4a_vol 0x50
	m4a_note_key 0xE8, 0x4D @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x4A @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x4D @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4F @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x4D @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE8, 0x51 @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x50 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEE, 0x4C @ N44
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x83 @ W03
	m4a_vol 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_vol 0x50
	m4a_note_key 0xE8, 0x4E @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x50 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x55 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x53 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x58 @ N08
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x81 @ W01
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x8E @ W14
	m4a_mod 0x00
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x55 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEE, 0x53 @ N44
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x83 @ W03
	m4a_vol 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_voice 0x30
	m4a_vol 0x50
	m4a_note_key_vel 0xE8, 0x45, 0x60 @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x03
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x50 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xFB, 0x4C @ N84
	m4a_wait 0x9C @ W36
	m4a_mod 0x03
	m4a_wait 0x98 @ W24
	m4a_wait 0x83 @ W03
	m4a_vol 0x4E
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_wait 0x8C @ W12
	m4a_vol 0x50
	m4a_note 0xE8 @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x03
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x51 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x4F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xFC, 0x4E @ N88
	m4a_wait 0x9C @ W36
	m4a_mod 0x03
	m4a_wait 0x98 @ W24
	m4a_wait 0x83 @ W03
	m4a_vol 0x4E
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_wait 0x8C @ W12
	m4a_vol 0x50
	m4a_note_key 0xE8, 0x4D @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x03
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x53 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE8, 0x55 @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x03
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x56 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEE, 0x51 @ N44
	m4a_wait 0x8F @ W15
	m4a_mod 0x03
	m4a_wait 0x89 @ W09
	m4a_vol 0x4E
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_vol 0x50
	m4a_note_key 0xEA, 0x53 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x50 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x53 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x51 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE8, 0x53 @ N28
	m4a_wait 0x9B @ W32
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_vol 0x4D
	m4a_note_key 0xEE, 0x56 @ N44
	m4a_wait 0x86 @ W06
	m4a_vol 0x4A
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x03
	m4a_vol 0x48
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x4B @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x4E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_goto 0x088756F0
	m4a_fine
	.globl SongTrack_MUS_ROUTE120_03
SongTrack_MUS_ROUTE120_03: @ 0x08875A2C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_xcmd_u8 0x08, 0x08 @ XIECV
	m4a_running_xcmd_u8 0x09, 0x08 @ XIECL (running status)
	m4a_pan 0x70
	m4a_vol 0x50
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x3D, 0x34 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x52
	m4a_note_key 0xE7, 0x39 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x3B @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE7, 0x3B @ N24
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE8, 0x37 @ N28
	m4a_wait 0x9C @ W36
	m4a_running_note_key 0x39 @ N28 (running status)
	m4a_wait 0x9C @ W36
	m4a_note_key 0xE7, 0x3B @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x52
	m4a_note_key 0xDB, 0x3C @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x84 @ W04
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x38, 0x3C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x07
	m4a_pan 0x41
	m4a_bend 0x3C
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD7, 0x39, 0x20 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x37 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x37 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x35 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x35 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x53 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x38 @ N04
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_pan 0x6F
	m4a_note_key_vel 0xDF, 0x34, 0x38 @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x38 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x3D, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x40 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x3D @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_pan 0x40
	m4a_wait 0x88 @ W08
	m4a_voice 0x05
	m4a_vol 0x50
	m4a_bend 0x3C
	m4a_note_key_vel 0xD7, 0x50, 0x20 @ N08
	m4a_wait 0x88 @ W08
	m4a_bend 0x3E
	m4a_note_key 0xD7, 0x55 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x58 @ N04
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_pan 0x70
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x3D, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x39, 0x30 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x3D @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x39 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x05
	m4a_pan 0x40
	m4a_wait 0x88 @ W08
	m4a_vol 0x50
	m4a_bend 0x3C
	m4a_note_key_vel 0xD7, 0x4E, 0x20 @ N08
	m4a_wait 0x88 @ W08
	m4a_bend 0x3E
	m4a_note_key 0xD7, 0x51 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x56 @ N04
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_pan 0x70
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x39, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xE7, 0x39, 0x38 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x05
	m4a_pan 0x40
	m4a_wait 0x88 @ W08
	m4a_vol 0x50
	m4a_bend 0x3C
	m4a_note_key_vel 0xD7, 0x4C, 0x20 @ N08
	m4a_wait 0x88 @ W08
	m4a_bend 0x3E
	m4a_note_key 0xD7, 0x51 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x55 @ N04
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_pan 0x70
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x42, 0x40 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDF @ N16
	m4a_wait 0x88 @ W08
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_wait 0x84 @ W04
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x44 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x42 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDB, 0x44 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDF @ N16
	m4a_wait 0x88 @ W08
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_vol 0x24
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x47 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xDB, 0x45, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x40 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x3D @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x3D, 0x38 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x44 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xDB, 0x3D, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x3D @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x45, 0x38 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x42 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x3E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xDB, 0x39, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x52
	m4a_note_key_vel 0xD7, 0x39, 0x18 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x39, 0x2C @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3B @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x3D @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x34 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDF @ N16
	m4a_wait 0x98 @ W24
	m4a_voice 0x52
	m4a_note_key 0xDB, 0x38 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x3E, 0x3C @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x3B @ N16
	m4a_wait 0x90 @ W16
	m4a_goto 0x08875A2E
	m4a_fine
	.globl SongTrack_MUS_ROUTE120_04
SongTrack_MUS_ROUTE120_04: @ 0x08875DA4
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_xcmd_u8 0x08, 0x08 @ XIECV
	m4a_running_xcmd_u8 0x09, 0x08 @ XIECL (running status)
	m4a_pan 0x10
	m4a_vol 0x50
	m4a_note_key_vel 0xFC, 0x40, 0x34 @ N88
	m4a_wait 0xB0 @ W96
	m4a_note 0xF7 @ N72
	m4a_wait 0xA8 @ W72
	m4a_note_key 0xE7, 0x3D @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x3E @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE8, 0x3B @ N28
	m4a_wait 0x9C @ W36
	m4a_running_note_key 0x3D @ N28 (running status)
	m4a_wait 0x9C @ W36
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xFC, 0x3C @ N88
	m4a_wait 0xB0 @ W96
	m4a_note 0xEF @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xDB, 0x41 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3E @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEE, 0x40 @ N44
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xDB, 0x3B @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xFF, 0x3B, 0x3C @ N96
	m4a_wait 0xB0 @ W96
	m4a_voice 0x06
	m4a_pan 0x40
	m4a_note_key_vel 0xD7, 0x39, 0x38 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x37 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x37 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x35 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x35 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x53 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x38 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x50
	m4a_pan 0x10
	m4a_note_key_vel 0xDF, 0x38, 0x40 @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3E @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xEA, 0x40, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x45 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEA, 0x40 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x40
	m4a_wait 0x88 @ W08
	m4a_voice 0x04
	m4a_vol 0x50
	m4a_note_key_vel 0xD7, 0x50, 0x38 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x58 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x50
	m4a_pan 0x10
	m4a_note_key_vel 0xEA, 0x40, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x43 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x3E, 0x3C @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xE7, 0x3E, 0x38 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x04
	m4a_pan 0x41
	m4a_wait 0x88 @ W08
	m4a_vol 0x50
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x56 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x50
	m4a_pan 0x10
	m4a_note_key_vel 0xEA, 0x3E, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x41 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEA, 0x3D @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xE7, 0x3D, 0x38 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x04
	m4a_pan 0x40
	m4a_wait 0x88 @ W08
	m4a_vol 0x50
	m4a_note_key 0xD7, 0x4C @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x50
	m4a_pan 0x10
	m4a_note_key_vel 0xE8, 0x45, 0x40 @ N28
	m4a_wait 0x94 @ W20
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD3, 0x44 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x47 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x45 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE8, 0x47 @ N28
	m4a_wait 0x94 @ W20
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x49 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x4A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xEA, 0x49, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x45 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEA, 0x40 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x40, 0x40 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x44 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x49 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xEA, 0x40, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x43 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x3E @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x4A, 0x40 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x42 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xEA, 0x3E, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x45 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x3D @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD7, 0x3D, 0x18 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x3D, 0x34 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x40, 0x38 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x39 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xE7, 0x3B, 0x34 @ N24
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xEC @ N40
	m4a_wait 0xA0 @ W48
	m4a_note 0xEC @ N40
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xDB, 0x42, 0x44 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x3E @ N16
	m4a_wait 0x90 @ W16
	m4a_goto 0x08875DA6
	m4a_fine
	.globl SongTrack_MUS_ROUTE120_05
SongTrack_MUS_ROUTE120_05: @ 0x08876027
	@ M4A track start proven by song header pointer
	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_vol 0x50
	m4a_note_key_vel 0xFF, 0x39, 0x5C @ N96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	.globl gText_Rom_876035
gText_Rom_876035: @ 0x08876035
	.string "………$"
	.if (. - gText_Rom_876035) > 0x4
	.error "gText_Rom_876035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_876035) < 0x4
	.space 0x4 - (. - gText_Rom_876035)
	.endif
	.space 0x5, 0xB0

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_87603E
gText_Rom_87603E: @ 0x0887603E
	.string "………$"
	.if (. - gText_Rom_87603E) > 0x4
	.error "gText_Rom_87603E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_87603E) < 0x4
	.space 0x4 - (. - gText_Rom_87603E)
	.endif
	.space 0x5, 0xB0

