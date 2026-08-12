	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8B077F
gText_Rom_8B077F: @ 0x088B077F
	.string "………$"
	.if (. - gText_Rom_8B077F) > 0x4
	.error "gText_Rom_8B077F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8B077F) < 0x4
	.space 0x4 - (. - gText_Rom_8B077F)
	.endif
	@ analyzed canonical ROM range 0x088B0783-0x088BA567
	@ pass3: M4A audio region; proven headers/tracks are labeled below
	.byte 0x33, 0x98, 0xBE, 0x50, 0x85, 0x4A, 0x87, 0x47, 0x85, 0x45, 0x87, 0x42, 0x85, 0x40, 0x87, 0x3B
	.byte 0x85, 0x34, 0x87, 0x2E, 0x85, 0x28, 0x87, 0x23, 0x85, 0x1F, 0x87, 0xBD, 0x2F, 0xBE, 0x58, 0xD7
	.byte 0x8C, 0xB1

	.globl SongTrack_MUS_INTRO_BATTLE_04
SongTrack_MUS_INTRO_BATTLE_04: @ 0x088B07A5
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x2F
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x58
	m4a_pan 0x20
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xD5, 0x35, 0x7F @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x2E, 0x78 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x35, 0x7F @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x35, 0x78 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x2E, 0x7F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_pan 0x59
	m4a_note_key_vel 0xD5, 0x3F, 0x7C @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x28
	m4a_note_key_vel 0xD5, 0x33, 0x7F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_note_key_vel 0xDB, 0x2E, 0x78 @ N12
	m4a_wait 0x98 @ W24
	m4a_pan 0x59
	m4a_note_key_vel 0xD5, 0x33, 0x7F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x2A
	m4a_note_key 0xD5, 0x2E @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_note_key_vel 0xDB, 0x27, 0x7C @ N12
	m4a_wait 0x98 @ W24
	m4a_pan 0x59
	m4a_note_key 0xD5, 0x3F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x2A
	m4a_note_key_vel 0xD5, 0x33, 0x7F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x3F
	m4a_note_key_vel 0xDB, 0x2E, 0x7C @ N12
	m4a_wait 0x98 @ W24
	m4a_pan 0x59
	m4a_note_key 0xD5, 0x33 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x33, 0x7F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x2A
	m4a_note_key 0xD5, 0x2E @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_note_key_vel 0xD3, 0x33, 0x78 @ N04
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x33, 0x48 @ N04 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x33, 0x4C @ N04 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x33, 0x70 @ N04 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x5B
	m4a_note_key_vel 0xD5, 0x3F, 0x7C @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x2A
	m4a_note_key_vel 0xD5, 0x33, 0x7F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_note_key_vel 0xDB, 0x2E, 0x78 @ N12
	m4a_wait 0x98 @ W24
	m4a_pan 0x5F
	m4a_note_key_vel 0xD5, 0x3A, 0x7F @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x2B
	m4a_note_key 0xD5, 0x33 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x2E, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x2E, 0x7F @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x27 @ N06
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_voice 0x38
	m4a_vol 0x38
	m4a_note_key_vel 0xD3, 0x55, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_vol 0x58
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x2F
	m4a_pan 0x5D
	m4a_note_key_vel 0xD2, 0x33, 0x7F @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x1A
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x8C @ W12
	m4a_voice 0x2E
	m4a_note_key_vel 0xD3, 0x46, 0x60 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x59 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x2F
	m4a_vol 0x58
	m4a_pan 0x59
	m4a_note_key_vel 0xD5, 0x33, 0x7F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD3, 0x33, 0x70 @ N04
	m4a_wait 0x86 @ W06
	m4a_pan 0x28
	m4a_note_key_vel 0xD5, 0x2E, 0x7F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_note_key_vel 0xDB, 0x27, 0x78 @ N12
	m4a_wait 0x98 @ W24
	m4a_pan 0x59
	m4a_note_key_vel 0xD5, 0x33, 0x7C @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x28
	m4a_note_key_vel 0xD5, 0x2E, 0x7F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_note_key_vel 0xDB, 0x27, 0x78 @ N12
	m4a_wait 0x98 @ W24
	m4a_pan 0x59
	m4a_note_key_vel 0xD5, 0x33, 0x7C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD3, 0x33, 0x70 @ N04
	m4a_wait 0x86 @ W06
	m4a_pan 0x28
	m4a_note_key_vel 0xD5, 0x33, 0x7F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x3F
	m4a_note_key_vel 0xDB, 0x2E, 0x7C @ N12
	m4a_wait 0x98 @ W24
	m4a_pan 0x59
	m4a_note_key 0xD5, 0x33 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x2A
	m4a_note_key_vel 0xD5, 0x33, 0x7F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_note_key_vel 0xDB, 0x2E, 0x78 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x33, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x1D
	m4a_note_key_vel 0xFF, 0x27, 0x7C @ N96
	m4a_wait 0x98 @ W24
	m4a_vol 0x4E
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x4D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x4C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x48 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x48 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x43 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x40 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_voice 0x01
	m4a_vol 0x40
	m4a_pan 0x40
	m4a_note_key_vel 0xD7, 0x63, 0x78 @ N08
	m4a_wait 0x8C @ W12
	m4a_fine
	.globl SongTrack_MUS_INTRO_BATTLE_05
SongTrack_MUS_INTRO_BATTLE_05: @ 0x088B0927
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x38
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x48
	m4a_vol 0x02
	m4a_note_key_vel 0xEF, 0x52, 0x70 @ N48
	m4a_wait 0x82 @ W02
	m4a_vol 0x03
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x06 @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x06 @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEB, 0x59 @ N36
	m4a_wait 0x82 @ W02
	m4a_vol 0x1A
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2E @ VOL (running status)
	m4a_note_key 0xD2, 0x56 @ N03
	m4a_wait 0x81 @ W01
	m4a_vol 0x31
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD2, 0x52 @ N03
	m4a_wait 0x81 @ W01
	m4a_vol 0x34
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_note_key 0xD2, 0x50 @ N03
	m4a_wait 0x82 @ W02
	m4a_vol 0x3B
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x83 @ W03
	m4a_pan 0x2B
	m4a_vol 0x34
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x48 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x50 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x4D @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x47 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x47 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xDB, 0x52 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_voice 0x30
	m4a_pan 0x2B
	m4a_note_key 0xD5, 0x56 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x20
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x38
	m4a_vol 0x42
	m4a_pan 0x2B
	m4a_note_key 0xD3, 0x5D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x59 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x59 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x5B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_pan 0x3D
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD8, 0x52 @ N09
	m4a_wait 0x89 @ W09
	m4a_note_key 0xD5, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x89 @ W09
	m4a_note_key 0xDB, 0x59 @ N12
	m4a_wait 0x98 @ W24
	m4a_pan 0x28
	m4a_vol 0x38
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x4E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x49 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x49 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x50 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x46 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x2E
	m4a_pan 0x20
	m4a_vol 0x42
	m4a_note_key 0xD5, 0x5E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x30
	m4a_note_key 0xD5, 0x57 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x5F
	m4a_note_key_vel 0xD5, 0x54, 0x68 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x52, 0x64 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x50, 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4D, 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_vol 0x42
	m4a_pan 0x5F
	m4a_note_key_vel 0xD5, 0x4B, 0x3C @ N06
	m4a_wait 0x8C @ W12
	m4a_fine
	.globl SongTrack_MUS_INTRO_BATTLE_06
SongTrack_MUS_INTRO_BATTLE_06: @ 0x088B0AE4
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x01
	m4a_vol 0x06
	m4a_note_key_vel 0xEF, 0x3A, 0x70 @ N48
	m4a_wait 0x82 @ W02
	m4a_vol 0x09
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_note_key 0xEF, 0x41 @ N48
	m4a_wait 0x82 @ W02
	m4a_vol 0x23
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x40 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x43 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x46 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4B @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4C @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4B @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4A @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4B @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x53 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xEF, 0x52 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_vol 0x29
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_mod 0x00
	m4a_vol 0x2C
	m4a_note_key 0xEF, 0x3A @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_vol 0x2A
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2C
	m4a_note_key 0xEF, 0x42 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_vol 0x26
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_mod 0x00
	m4a_vol 0x2C
	m4a_note_key 0xD3, 0x36 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x37 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x38 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x44 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x43 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4B @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4C @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4E @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4E @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xFF, 0x43 @ N96
	m4a_wait 0xA0 @ W48
	m4a_mod 0x07
	m4a_vol 0x29
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_mod 0x01
	m4a_vol 0x33
	m4a_note 0xD5 @ N06
	m4a_note_key 0xD7, 0x5B @ N08
	m4a_wait 0x8C @ W12
	m4a_fine
	.globl SongTrack_MUS_INTRO_BATTLE_07
SongTrack_MUS_INTRO_BATTLE_07: @ 0x088B0C55
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x06
	m4a_note_key_vel 0xEF, 0x4A, 0x70 @ N48
	m4a_wait 0x82 @ W02
	m4a_vol 0x09
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_note_key 0xEF, 0x52 @ N48
	m4a_wait 0x82 @ W02
	m4a_vol 0x23
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x40 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x43 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x46 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x3F @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_mod 0x00
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x40 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x3F @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x3F @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x47 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xEF, 0x46 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_vol 0x2A
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_vol 0x2C
	m4a_note 0xEF @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_vol 0x2A
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x27 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_vol 0x2C
	m4a_note_key 0xEF, 0x47 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_vol 0x2B
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x27 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_vol 0x2C
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_bend 0x3A
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x9B @ W32
	m4a_running_note_key_vel 0x46, 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x59 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_bend 0x40
	m4a_note_key_vel 0xD2, 0x3A, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x3F @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x40 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x42 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x3A @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x42 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xFF, 0x52 @ N96
	m4a_wait 0xA0 @ W48
	m4a_mod 0x07
	m4a_wait 0xA0 @ W48
	m4a_running_cmd_u8 0x01 @ MOD (running status)
	m4a_vol 0x2C
	m4a_note_key 0xD5, 0x27 @ N06
	m4a_wait 0x8C @ W12
	m4a_fine
	.globl SongTrack_MUS_INTRO_BATTLE_08
SongTrack_MUS_INTRO_BATTLE_08: @ 0x088B0DEE
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_pan 0x40
	m4a_vol 0x48
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x64 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_note_key_vel 0xEF, 0x39, 0x54 @ N48
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_note_key_vel 0xEF, 0x39, 0x54 @ N48
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_pend
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_note_key_vel 0xEF, 0x39, 0x54 @ N48
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x28, 0x58 @ N03
	m4a_note_key 0xEF, 0x39 @ N48
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x64 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x64 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x64 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_note_key_vel 0xEF, 0x39, 0x54 @ N48
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_note_key_vel 0xE7, 0x37, 0x50 @ N24
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_vol 0x3F
	m4a_note_key_vel 0xD3, 0x2A, 0x70 @ N04
	m4a_note_key_vel 0xEF, 0x39, 0x54 @ N48
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x2A, 0x50 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x50 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x70 @ N04 (running status)
	m4a_note_key_vel 0xEF, 0x39, 0x54 @ N48
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x2A, 0x50 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x50 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x50 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x50 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x70 @ N04 (running status)
	m4a_note_key 0xEF, 0x39 @ N48
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x2A, 0x50 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2A, 0x50 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_vol 0x48
	m4a_note_key_vel 0xD2, 0x28, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x64 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x78 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xEF, 0x39, 0x54 @ N48
	m4a_wait 0xA0 @ W48
	m4a_patt 0x088B0E41
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_note_key_vel 0xEF, 0x39, 0x54 @ N48
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x28, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xEF, 0x39, 0x54 @ N48
	m4a_wait 0xB0 @ W96
	m4a_wait 0x8C @ W12
	m4a_fine
	.globl SongTrack_MUS_INTRO_BATTLE_09
SongTrack_MUS_INTRO_BATTLE_09: @ 0x088B0FE1
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x41
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xD5, 0x35, 0x5C @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD1, 0x35 @ N02
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x26 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xDD, 0x27, 0x78 @ N14
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD3, 0x26, 0x70 @ N04
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x33 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x27 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD3, 0x26 @ N04
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2C @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xDB, 0x27, 0x78 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD3, 0x2A, 0x70 @ N04
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x33 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x27 @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x27, 0x78 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD3, 0x2A, 0x70 @ N04
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x27 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD3, 0x26 @ N04
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x32 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD3, 0x27 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDF, 0x2D, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x2E @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x54 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDF, 0x32, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x33 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2B @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x2B, 0x60 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2B, 0x70 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x2B, 0x60 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x2B, 0x70 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x2F, 0x60 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDD, 0x31, 0x70 @ N14
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD5, 0x32 @ N06
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD5, 0x27 @ N06
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x2E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xDE, 0x2D @ N15
	m4a_wait 0x8F @ W15
	m4a_note_key_vel 0xDB, 0x27, 0x78 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD3, 0x26, 0x70 @ N04
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x27 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD3, 0x2A @ N04
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x32 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xDB, 0x27, 0x78 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD3, 0x2A, 0x70 @ N04
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x35 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x27 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD3, 0x2E @ N04
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x32 @ N24
	m4a_wait 0x98 @ W24
	m4a_wait 0xB0 @ W96
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x27 @ N06
	m4a_wait 0x8C @ W12
	m4a_fine
	m4a_running_note_key_vel_gate 0x00, 0x00, 0x00 @ N06 (running status)
	.globl SongHeader_MUS_INTRO_BATTLE
SongHeader_MUS_INTRO_BATTLE: @ 0x088B10F8
	@ M4A song header: song 442 (MUS_INTRO_BATTLE)
	m4a_song_header 9, 0, 0, 0xB2, VoiceGroup_JP_0861799C
	.4byte SongTrack_MUS_INTRO_BATTLE_01
	.4byte SongTrack_MUS_INTRO_BATTLE_02
	.4byte SongTrack_MUS_INTRO_BATTLE_03
	.4byte SongTrack_MUS_INTRO_BATTLE_04
	.4byte SongTrack_MUS_INTRO_BATTLE_05
	.4byte SongTrack_MUS_INTRO_BATTLE_06
	.4byte SongTrack_MUS_INTRO_BATTLE_07
	.4byte SongTrack_MUS_INTRO_BATTLE_08
	.4byte SongTrack_MUS_INTRO_BATTLE_09

	.globl SongTrack_MUS_ABNORMAL_WEATHER_01
SongTrack_MUS_ABNORMAL_WEATHER_01: @ 0x088B1124
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x36
	m4a_voice 0x49
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_wait 0x98 @ W24
	m4a_pan 0x40
	m4a_vol 0x0A
	m4a_tie_key_vel 0x46, 0x70 @ TIE
	m4a_wait 0xA0 @ W48
	m4a_vol 0x0A
	m4a_wait 0x9B @ W32
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_pend
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x27 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_mod 0x05
	m4a_wait 0xA0 @ W48
	m4a_eot
	m4a_mod 0x00
	m4a_tie_key 0x47 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_mod 0x09
	m4a_wait 0x8C @ W12
	m4a_vol 0x28
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x98 @ W24
	m4a_eot
	m4a_pan 0x40
	m4a_vol 0x0A
	m4a_mod 0x00
	m4a_tie_key 0x46 @ TIE
	m4a_wait 0xA0 @ W48
	m4a_vol 0x0A
	m4a_wait 0x9B @ W32
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_vol 0x0F
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x27 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0xA0 @ W48
	m4a_pend
	m4a_eot_key 0x46
	m4a_tie_key_vel 0x47, 0x70 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0x8C @ W12
	m4a_vol 0x28
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_eot_key 0x47
	m4a_patt 0x088B112F
	m4a_patt 0x088B119A
	m4a_eot_key 0x46
	m4a_tie_key_vel 0x47, 0x70 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_patt 0x088B11BA
	m4a_eot_key 0x47
	m4a_patt 0x088B112F
	m4a_patt 0x088B119A
	m4a_eot_key 0x46
	m4a_tie_key_vel 0x47, 0x70 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_patt 0x088B11BA
	m4a_eot_key 0x47
	m4a_goto 0x088B112F
	m4a_fine
	.globl SongTrack_MUS_ABNORMAL_WEATHER_02
SongTrack_MUS_ABNORMAL_WEATHER_02: @ 0x088B1211
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x7F
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x2D
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD1, 0x5B, 0x70 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x48 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x4C @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x48 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x4C @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x48 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x4C @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x48 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x4C @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_patt 0x088B121E
	m4a_goto 0x088B121E
	m4a_fine
	.globl SongTrack_MUS_ABNORMAL_WEATHER_03
SongTrack_MUS_ABNORMAL_WEATHER_03: @ 0x088B1295
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x01
	m4a_vol 0x2A
	m4a_note_key_vel 0xE7, 0x2D, 0x70 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x2F
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x08
	m4a_vol 0x3D
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_vol 0x3C
	m4a_pan 0x40
	m4a_mod 0x00
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x27, 0x70 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x33 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x26 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x27, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x38 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x26, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x64 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x26, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x27 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x26 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x27 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xD7, 0x27, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x28, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x27, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x28, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x28, 0x70 @ N08
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x34 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x28 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x28, 0x38 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x64 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x28 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pan 0x02
	m4a_vol 0x2A
	m4a_note 0xE7 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x2F
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x0D
	m4a_vol 0x3D
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_pan 0x40
	m4a_mod 0x02
	m4a_note_key 0xD7, 0x26 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x27, 0x70 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x33 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x26 @ N04
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B12DC
	m4a_patt 0x088B1302
	m4a_note_key_vel 0xD7, 0x28, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x28, 0x38 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x64 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x28 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pan 0x02
	m4a_vol 0x2A
	m4a_note 0xE7 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x2F
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_vol 0x3C
	m4a_pan 0x40
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x27, 0x70 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x33 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x26 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_patt 0x088B12DC
	m4a_patt 0x088B1302
	m4a_patt 0x088B137E
	m4a_patt 0x088B13AB
	m4a_patt 0x088B12DC
	m4a_patt 0x088B1302
	m4a_patt 0x088B137E
	m4a_goto 0x088B12B6
	m4a_fine
	.globl SongTrack_MUS_ABNORMAL_WEATHER_04
SongTrack_MUS_ABNORMAL_WEATHER_04: @ 0x088B13F9
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_vol 0x28
	m4a_pan 0x7F
	m4a_note_key_vel 0xE7, 0x28, 0x70 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x2A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x08
	m4a_vol 0x35
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x40
	m4a_vol 0x0A
	m4a_mod 0x00
	m4a_tie_key_vel 0x3F, 0x70 @ TIE
	m4a_wait 0xA0 @ W48
	m4a_vol 0x0D
	m4a_wait 0xA0 @ W48
	m4a_vol 0x14
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x49 @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_eot_key 0x3F
	m4a_vol 0x28
	m4a_tie_key_vel 0x3F, 0x70 @ TIE
	m4a_wait 0xA0 @ W48
	m4a_mod 0x03
	m4a_wait 0x8C @ W12
	m4a_vol 0x24
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_vol 0x13
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_mod 0x09
	m4a_wait 0x8C @ W12
	m4a_vol 0x0B
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_eot
	m4a_pan 0x7F
	m4a_vol 0x1B
	m4a_mod 0x02
	m4a_note_key 0xE7, 0x2F @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x2A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x0D
	m4a_vol 0x35
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x40
	m4a_vol 0x0A
	m4a_mod 0x02
	m4a_tie_key 0x3F @ TIE
	m4a_wait 0xA0 @ W48
	m4a_vol 0x0D
	m4a_wait 0xA0 @ W48
	m4a_patt 0x088B1429
	m4a_eot_key 0x3F
	m4a_vol 0x28
	m4a_tie_key_vel 0x3F, 0x70 @ TIE
	m4a_wait 0xA4 @ W60
	m4a_vol 0x24
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_vol 0x17
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_eot_key 0x3F
	m4a_pan 0x7F
	m4a_vol 0x1B
	m4a_note_key_vel 0xE7, 0x2F, 0x70 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x2A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x40
	m4a_vol 0x0A
	m4a_tie_key_vel 0x3F, 0x70 @ TIE
	m4a_wait 0xA0 @ W48
	m4a_vol 0x0D
	m4a_wait 0xA0 @ W48
	m4a_pend
	m4a_patt 0x088B1429
	m4a_eot_key 0x3F
	m4a_patt 0x088B1486
	m4a_patt 0x088B1494
	m4a_eot_key 0x3F
	m4a_pan 0x7F
	m4a_vol 0x1B
	m4a_note_key_vel 0xE7, 0x2F, 0x70 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x2A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_patt 0x088B14B7
	m4a_patt 0x088B1429
	m4a_eot_key 0x3F
	m4a_patt 0x088B1486
	m4a_patt 0x088B1494
	m4a_eot_key 0x3F
	m4a_pan 0x7F
	m4a_vol 0x1B
	m4a_note_key_vel 0xE7, 0x2F, 0x70 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x2A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_goto 0x088B141C
	m4a_fine
	.globl SongTrack_MUS_ABNORMAL_WEATHER_05
SongTrack_MUS_ABNORMAL_WEATHER_05: @ 0x088B151A
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_pan 0x40
	m4a_mod 0x40
	m4a_vol 0x50
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD3, 0x24, 0x7F @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x24, 0x70 @ N04 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x24, 0x58 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xD3, 0x24, 0x7F @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x24, 0x70 @ N04 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x26, 0x7F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x24, 0x58 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_patt 0x088B1534
	m4a_patt 0x088B1534
	m4a_patt 0x088B1525
	m4a_patt 0x088B1534
	m4a_patt 0x088B1534
	m4a_patt 0x088B1534
	m4a_patt 0x088B1525
	m4a_patt 0x088B1534
	m4a_patt 0x088B1534
	m4a_patt 0x088B1534
	m4a_patt 0x088B1525
	m4a_patt 0x088B1534
	m4a_patt 0x088B1534
	m4a_patt 0x088B1534
	m4a_goto 0x088B1525
	m4a_fine
	.globl SongTrack_MUS_ABNORMAL_WEATHER_06
SongTrack_MUS_ABNORMAL_WEATHER_06: @ 0x088B1592
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x28
	m4a_bend 0x41
	m4a_note_key_vel 0xE7, 0x2D, 0x70 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x8C @ W12
	m4a_voice 0x52
	m4a_mod 0x00
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x27, 0x70 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x33 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x26 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x27, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x38 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x26, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x64 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x26, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x27 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x26 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x27 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xD7, 0x27, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x28, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x27, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x28, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x28, 0x70 @ N08
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x34 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x28 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x28, 0x38 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x64 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x28 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x0D
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_mod 0x00
	m4a_bend 0x40
	m4a_note_key 0xDF, 0x52 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x55 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x54 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x5A @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEC, 0x4B @ N40
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x99 @ W28
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xE7, 0x4E @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x50 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD7, 0x53 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x52 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x50 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x5A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x5C @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xED, 0x4B @ N42
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x9A @ W30
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xE7, 0x4E @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x50 @ N24
	m4a_wait 0x8E @ W14
	m4a_mod 0x07
	m4a_wait 0x8A @ W10
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_bend 0x42
	m4a_note_key 0xD7, 0x26 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x27, 0x70 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x33 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x26 @ N04
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B15D0
	m4a_patt 0x088B15F6
	m4a_note_key_vel 0xD7, 0x28, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x28, 0x38 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x64 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x27, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x28 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_voice 0x53
	m4a_bend 0x40
	m4a_note_key 0xDF, 0x46 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEC, 0x3F @ N40
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x99 @ W28
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xE7, 0x42 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x44 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD7, 0x47 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x44 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xED, 0x3F @ N42
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x9A @ W30
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xE7, 0x42 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x44 @ N24
	m4a_wait 0x8E @ W14
	m4a_mod 0x07
	m4a_wait 0x8A @ W10
	m4a_goto 0x088B15AC
	m4a_mod 0x00
	m4a_fine
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	.globl SongHeader_MUS_ABNORMAL_WEATHER
SongHeader_MUS_ABNORMAL_WEATHER: @ 0x088B1758
	@ M4A song header: song 443 (MUS_ABNORMAL_WEATHER)
	m4a_song_header 6, 0, 0, 0xB2, VoiceGroup_JP_08617F9C
	.4byte SongTrack_MUS_ABNORMAL_WEATHER_01
	.4byte SongTrack_MUS_ABNORMAL_WEATHER_02
	.4byte SongTrack_MUS_ABNORMAL_WEATHER_03
	.4byte SongTrack_MUS_ABNORMAL_WEATHER_04
	.4byte SongTrack_MUS_ABNORMAL_WEATHER_05
	.4byte SongTrack_MUS_ABNORMAL_WEATHER_06

	.globl SongTrack_MUS_WEATHER_GROUDON_01
SongTrack_MUS_WEATHER_GROUDON_01: @ 0x088B1778
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x27
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x00
	m4a_vol 0x27
	m4a_bend 0x42
	m4a_note_key_vel 0xD2, 0x63, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x63 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x63, 0x60 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x63 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key_vel 0xD2, 0x65, 0x60 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5C, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x65 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B17B4
	m4a_patt 0x088B17A0
	m4a_patt 0x088B17A0
	m4a_patt 0x088B17B4
	m4a_patt 0x088B17B4
	m4a_note_key_vel 0xD2, 0x63, 0x60 @ N03
	m4a_wait 0x89 @ W09
	m4a_running_note_key_vel 0x63, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x63 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_pend
	m4a_patt 0x088B17E1
	m4a_note_key_vel 0xD2, 0x65, 0x60 @ N03
	m4a_wait 0x89 @ W09
	m4a_running_note_key_vel 0x65, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x65 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_pend
	m4a_patt 0x088B180A
	m4a_patt 0x088B17E1
	m4a_patt 0x088B17E1
	m4a_patt 0x088B180A
	m4a_patt 0x088B180A
	m4a_goto 0x088B177A
	m4a_fine
	.globl SongTrack_MUS_WEATHER_GROUDON_02
SongTrack_MUS_WEATHER_GROUDON_02: @ 0x088B184D
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x27
	m4a_note_key_vel 0xD2, 0x63, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x63 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x63, 0x60 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x63 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key_vel 0xD2, 0x65, 0x60 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5C, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x65 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B1885
	m4a_bend 0x3E
	m4a_note_key_vel 0xD2, 0x63, 0x60 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x63 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B1871
	m4a_patt 0x088B1885
	m4a_patt 0x088B1885
	m4a_note_key_vel 0xD2, 0x63, 0x60 @ N03
	m4a_wait 0x89 @ W09
	m4a_running_note_key_vel 0x63, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x63 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_pend
	m4a_patt 0x088B18C2
	m4a_note_key_vel 0xD2, 0x65, 0x60 @ N03
	m4a_wait 0x89 @ W09
	m4a_running_note_key_vel 0x65, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x65 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_pend
	m4a_patt 0x088B18EB
	m4a_wait 0x82 @ W02
	m4a_note_key_vel 0xD2, 0x63, 0x60 @ N03
	m4a_wait 0x89 @ W09
	m4a_running_note_key_vel 0x63, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x63 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x81 @ W01
	m4a_pend
	m4a_patt 0x088B1914
	m4a_wait 0x82 @ W02
	m4a_note_key_vel 0xD2, 0x65, 0x60 @ N03
	m4a_wait 0x89 @ W09
	m4a_running_note_key_vel 0x65, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x65 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x81 @ W01
	m4a_wait 0x82 @ W02
	m4a_running_note_key_vel 0x65, 0x60 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_running_note_key_vel 0x65, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x65 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x8A @ W10
	m4a_goto 0x088B184F
	m4a_fine
	.globl SongTrack_MUS_WEATHER_GROUDON_03
SongTrack_MUS_WEATHER_GROUDON_03: @ 0x088B1989
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x32
	m4a_note_key_vel 0xFE, 0x26, 0x40 @ N92
	m4a_wait 0xA0 @ W48
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x06 @ MOD (running status)
	m4a_wait 0x94 @ W20
	m4a_note_key 0xD1, 0x24 @ N02
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x25 @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_mod 0x00
	m4a_note_key_vel 0xFE, 0x26, 0x40 @ N92
	m4a_wait 0xA0 @ W48
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x06 @ MOD (running status)
	m4a_wait 0x94 @ W20
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x27 @ N04
	m4a_wait 0x84 @ W04
	m4a_pend
	m4a_mod 0x00
	m4a_note_key_vel 0xFE, 0x28, 0x40 @ N92
	m4a_wait 0xA0 @ W48
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x06 @ MOD (running status)
	m4a_wait 0x94 @ W20
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD1, 0x2A @ N02
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x29 @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_pend
	m4a_mod 0x00
	m4a_note_key_vel 0xEE, 0x28, 0x40 @ N44
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x94 @ W20
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD1, 0x26 @ N02
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x27 @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_mod 0x00
	m4a_note_key 0xEF, 0x28 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_mod 0x00
	m4a_note_key_vel 0xFE, 0x26, 0x40 @ N92
	m4a_wait 0xA0 @ W48
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x06 @ MOD (running status)
	m4a_wait 0x94 @ W20
	m4a_note_key 0xD1, 0x24 @ N02
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x25 @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_pend
	m4a_patt 0x088B19A8
	m4a_patt 0x088B19B8
	m4a_patt 0x088B19CA
	m4a_patt 0x088B19E2
	m4a_patt 0x088B19A8
	m4a_patt 0x088B19B8
	m4a_patt 0x088B19CA
	m4a_patt 0x088B19E2
	m4a_patt 0x088B19A8
	m4a_patt 0x088B19B8
	m4a_patt 0x088B19CA
	m4a_goto 0x088B198B
	m4a_mod 0x00
	m4a_fine
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	.globl SongHeader_MUS_WEATHER_GROUDON
SongHeader_MUS_WEATHER_GROUDON: @ 0x088B1A34
	@ M4A song header: song 444 (MUS_WEATHER_GROUDON)
	m4a_song_header 3, 0, 0, 0xB2, VoiceGroup_JP_0861859C
	.4byte SongTrack_MUS_WEATHER_GROUDON_01
	.4byte SongTrack_MUS_WEATHER_GROUDON_02
	.4byte SongTrack_MUS_WEATHER_GROUDON_03

	.globl SongTrack_MUS_SOOTOPOLIS_01
SongTrack_MUS_SOOTOPOLIS_01: @ 0x088B1A48
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x44
	m4a_voice 0x7F
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x2F
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD1, 0x5B, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x5B, 0x48 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD1 @ N02
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD1, 0x5B, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x60 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x48 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x54 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xD1, 0x5B, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x5B, 0x48 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x5B, 0x3C @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A80
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A57
	m4a_patt 0x088B1A64
	m4a_patt 0x088B1A64
	m4a_goto 0x088B1A57
	m4a_fine
	.globl SongTrack_MUS_SOOTOPOLIS_02
SongTrack_MUS_SOOTOPOLIS_02: @ 0x088B1B55
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x49
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x2D
	m4a_wait 0x82 @ W02
	m4a_note_key_vel 0xD3, 0x4E, 0x70 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x49
	m4a_note_key_vel 0xEF, 0x53, 0x70 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x53 @ N02
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x52 @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x50 @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x4E @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xF3, 0x50, 0x70 @ N60
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_vol 0x2C
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2D
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pend
	m4a_note_key 0xEF, 0x51 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_vol 0x2C
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2D
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x20 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x51, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD3, 0x51, 0x20 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x4A, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x50, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x50, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD7, 0x4E, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x50 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEC, 0x53, 0x70 @ N40
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x90 @ W16
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD7, 0x52 @ N08
	m4a_wait 0x88 @ W08
	m4a_mod 0x00
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x53 @ N02
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x52 @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x51 @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x50 @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_patt 0x088B1B82
	m4a_note_key_vel 0xEF, 0x51, 0x70 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_vol 0x2C
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2D
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x20 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x51, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xE7, 0x53, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_voice 0x3A
	m4a_vol 0x2A
	m4a_note_key 0xD7, 0x41 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD1, 0x4D, 0x70 @ N02
	m4a_wait 0x82 @ W02
	m4a_note_key 0xEE, 0x4E @ N44
	m4a_wait 0x96 @ W22
	m4a_mod 0x06
	m4a_vol 0x25
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2B
	m4a_note_key_vel 0xD1, 0x56, 0x48 @ N02
	m4a_wait 0x82 @ W02
	m4a_note_key_vel 0xDB, 0x55, 0x4C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD1, 0x54, 0x40 @ N02
	m4a_wait 0x82 @ W02
	m4a_note_key_vel 0xD3, 0x53, 0x44 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xEF, 0x4E, 0x70 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_vol 0x25
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2B
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x42, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEC, 0x4E, 0x70 @ N40
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_wait 0x90 @ W16
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x4B, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x4C, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x20 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x47, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x4C, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEC, 0x4C, 0x70 @ N40
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_vol 0x28
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_mod 0x00
	m4a_vol 0x2C
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x20 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD7, 0x47, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x82 @ W02
	m4a_note_key 0xDD, 0x4A @ N14
	m4a_wait 0x8E @ W14
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD7, 0x53, 0x58 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD1, 0x52, 0x54 @ N02
	m4a_wait 0x82 @ W02
	m4a_running_note_key_vel 0x51, 0x50 @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_running_note_key_vel 0x50, 0x4C @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x4F @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key_vel 0xD7, 0x4E, 0x58 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xEC, 0x4A, 0x70 @ N40
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x90 @ W16
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x4A, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD1, 0x49, 0x70 @ N02
	m4a_wait 0x82 @ W02
	m4a_note_key 0xE5, 0x4A @ N22
	m4a_wait 0x96 @ W22
	m4a_note_key 0xE7, 0x49 @ N24
	m4a_wait 0x88 @ W08
	m4a_vol 0x28
	m4a_wait 0x84 @ W04
	m4a_mod 0x05
	m4a_vol 0x25
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x01
	m4a_mod 0x00
	m4a_vol 0x29
	m4a_note_key 0xDB, 0x46 @ N12
	m4a_wait 0x8C @ W12
	m4a_vol 0x3E
	m4a_note_key_vel 0xD3, 0x4A, 0x50 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4D, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x82 @ W02
	m4a_note_key_vel 0xEB, 0x4E, 0x70 @ N36
	m4a_wait 0x9C @ W36
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x55 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x88 @ W08
	m4a_wait 0x82 @ W02
	m4a_note_key 0xEE, 0x4E @ N44
	m4a_wait 0x9F @ W44
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_wait 0x82 @ W02
	m4a_note_key 0xEB, 0x4E @ N36
	m4a_wait 0x9C @ W36
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_wait 0x82 @ W02
	m4a_note_key 0xDF, 0x4C @ N16
	m4a_wait 0x8E @ W14
	m4a_note_key 0xD3, 0x44 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_wait 0x82 @ W02
	m4a_note_key 0xEB, 0x4F @ N36
	m4a_wait 0x9C @ W36
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x4C @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x52 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x53 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x56 @ N04
	m4a_wait 0x88 @ W08
	m4a_wait 0x82 @ W02
	m4a_note_key 0xEC, 0x55 @ N40
	m4a_wait 0x9C @ W36
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD3, 0x50 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x51 @ N02
	m4a_wait 0x82 @ W02
	m4a_note_key 0xE5, 0x52 @ N22
	m4a_wait 0x96 @ W22
	m4a_note_key 0xE7, 0x53 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x55 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x82 @ W02
	m4a_voice 0x11
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_vol 0x39
	m4a_note_key 0xF2, 0x4E @ N56
	m4a_wait 0xA3 @ W56
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4F, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xF2, 0x51, 0x70 @ N56
	m4a_wait 0xA3 @ W56
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEC, 0x54 @ N40
	m4a_wait 0xA0 @ W48
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x54, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x51, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x51, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x53, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x4B @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x4B @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x4B @ N02
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x4C @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x4D @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x4E @ N02 (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xF2, 0x4F @ N56
	m4a_wait 0xA3 @ W56
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x51, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4F, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4F, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEF, 0x56, 0x70 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEF, 0x4C, 0x70 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x20 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4A, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x49, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x40, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x4A, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x42, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDB, 0x4C, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x18
	m4a_vol 0x3B
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xF2, 0x4E @ N56
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x9B @ W32
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4F, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xF2, 0x51, 0x70 @ N56
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x9B @ W32
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x51, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEC, 0x54, 0x70 @ N40
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x54, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xE7, 0x5A, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x57 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEC, 0x5B @ N40
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x90 @ W16
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x5D @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5D, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEC, 0x5A, 0x70 @ N40
	m4a_wait 0x90 @ W16
	m4a_mod 0x05
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x56 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x20 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEC, 0x58, 0x70 @ N40
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x90 @ W16
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x20 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x53, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x49, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x4A, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x4C, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x44 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x4E, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x49, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x50, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x49, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x52, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x49, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_goto 0x088B1B6A
	m4a_fine
	.globl SongTrack_MUS_SOOTOPOLIS_03
SongTrack_MUS_SOOTOPOLIS_03: @ 0x088B1F45
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x7E
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x2E
	m4a_wait 0x8C @ W12
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xDF, 0x58, 0x70 @ N16
	m4a_wait 0x98 @ W24
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA0 @ W48
	m4a_note 0xDF @ N16
	m4a_wait 0x98 @ W24
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_goto 0x088B1F52
	m4a_fine
	.globl SongTrack_MUS_SOOTOPOLIS_04
SongTrack_MUS_SOOTOPOLIS_04: @ 0x088B1F87
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x00
	m4a_vol 0x25
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD1, 0x36, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xD1, 0x36, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x40 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x36 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xD1, 0x36, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x40 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B1F99
	m4a_patt 0x088B1FAA
	m4a_patt 0x088B1FBD
	m4a_note_key_vel 0xD1, 0x36, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x41 @ N24
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3D @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3C @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDF, 0x3B, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x38 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x34 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x3B @ N24
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key 0xD1, 0x37 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD7 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x39 @ N04
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD7 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x35 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x38 @ N04
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x38 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x35 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x36 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x31 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x36 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x31 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3A @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x36 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x31 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3D @ N08
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3C @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B201B
	m4a_note_key_vel 0xD1, 0x37, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3B @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x37 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x36 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x32 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3B @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x37 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x41 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x38 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3D @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3A @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x40 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x39 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x45 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x39 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x40 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3D @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x42 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x39 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x3B @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD1, 0x3A @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x39 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x38 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x35 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x34 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x37 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x34 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x31 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x36 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x32 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x37 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x34 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x31 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x42 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x45 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x42 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x43 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x43 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x40 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x43 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4B @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x42 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x48 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x42 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x47 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x3A @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x44 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x47 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x44 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x46 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x46 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_goto 0x088B1F99
	m4a_fine
	.globl SongTrack_MUS_SOOTOPOLIS_05
SongTrack_MUS_SOOTOPOLIS_05: @ 0x088B21EF
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x25
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD1, 0x3B, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xD1, 0x3B, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x44 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xD1, 0x3B, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x45 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x44 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B2201
	m4a_patt 0x088B2212
	m4a_patt 0x088B2225
	m4a_note_key_vel 0xD1, 0x3B, 0x70 @ N02
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x47 @ N24
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD1, 0x3E @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3E @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3D @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x40 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x40 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD1, 0x3E @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x40 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x39 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x38 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3A @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x36 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x31 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3B @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x36 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x31 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3D @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3A @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x42 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x47 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x42 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x46 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x42 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x44 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x40 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x43 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x40 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x44 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD1, 0x40 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x43 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x43 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x40 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x42 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x47 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x49 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x46 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x47 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4A @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x42 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x45 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x48 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x47 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3F @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x45 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3F @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x42 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD1, 0x3D @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x43 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x39 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x38 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3D @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x39 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x34 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x40 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x37 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x4A @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x4A @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4C @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x49 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x4B @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x4B @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x4E @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD1, 0x41 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x3D @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4C @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x44 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x44 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4A @ N08
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x8A @ W10
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4C @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4C @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_goto 0x088B2201
	m4a_fine
	.globl SongTrack_MUS_SOOTOPOLIS_06
SongTrack_MUS_SOOTOPOLIS_06: @ 0x088B2463
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_pan 0x40
	m4a_vol 0x3B
	m4a_wait 0x8C @ W12
	m4a_wait 0xA8 @ W72
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD3, 0x36, 0x70 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x36, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x36, 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x36, 0x70 @ N04 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_patt 0x088B246D
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_goto 0x088B246C
	m4a_fine
	.globl SongTrack_MUS_SOOTOPOLIS_07
SongTrack_MUS_SOOTOPOLIS_07: @ 0x088B24AF
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x3A
	m4a_note_key_vel 0xD3, 0x2C, 0x70 @ N04
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N04 (running status)
	m4a_wait 0x82 @ W02
	m4a_running_note_key 0x31 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDF, 0x2F, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x2F @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3B @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDF, 0x2F, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x2F @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x3B @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3B @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3B @ N08
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3B @ N16
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x2A @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B24E5
	m4a_note_key_vel 0xDF, 0x2F, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x2A @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x2A @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3B @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x32 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3A @ N02
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x2E @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3A @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x32 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2D @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x39 @ N02
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x2D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x34 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2D @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2C @ N16
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2F @ N16 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2D @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x2C @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2B @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x2A @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2B @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x34 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x31 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x32 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2A @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x98 @ W24
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x29 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x32 @ N02
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x29 @ N04
	m4a_wait 0x9B @ W32
	m4a_note_key 0xDF, 0x2A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2E @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3B @ N02
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x32 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3A @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2E @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x3A @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x2E @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2D @ N16
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x9B @ W32
	m4a_note_key 0xDF, 0x2C @ N16
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2F @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x2C @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2D @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x2C @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2B @ N16
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x2F @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x2B @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x2F @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x2F @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x32 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x31 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x29 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x35 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x29 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x35 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x32 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x31 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x2B @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2A @ N16
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x28 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x2A @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x25 @ N12
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x31 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x32 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x2D @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x32 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2D @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x32 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x31 @ N16
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2D @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x31 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x30 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x2D @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x30 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x30 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x2D @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2F @ N16
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x31 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x33 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x2F @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x2B @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x37 @ N02
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x2E @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2D @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x32 @ N02
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x2D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x32 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x31 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x2D @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2C @ N16
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2D @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x2F @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2B @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x2D @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x28 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x31 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x32 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x39 @ N02
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x32 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD5 @ N06
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x32 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x31 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x2D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x32 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x34 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x32 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x31 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x30 @ N16
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x9B @ W32
	m4a_note_key 0xDF, 0x2F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x2A @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x31 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x33 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x2F @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x37 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2E @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x2F @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2E @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2D @ N16
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x32 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x31 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2C @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x32 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2C @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x2F @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2D @ N16
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x39 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2A @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x36 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x28 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x25 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_goto 0x088B24C8
	m4a_fine
	.globl SongTrack_MUS_SOOTOPOLIS_08
SongTrack_MUS_SOOTOPOLIS_08: @ 0x088B271B
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x49
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x2D
	m4a_pan 0x2D
	m4a_note_key_vel 0xD3, 0x47, 0x70 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x49
	m4a_note_key_vel 0xEF, 0x4A, 0x70 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD9, 0x47 @ N10
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xF3, 0x4C @ N60
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_vol 0x2C
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2D
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEF, 0x49 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_vol 0x2C
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2D
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4C @ N16
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x47 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEC, 0x4A @ N40
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x90 @ W16
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_mod 0x00
	m4a_note_key 0xD7, 0x47 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEC, 0x4C @ N40
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_vol 0x2C
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_note_key 0xD7, 0x4A @ N08
	m4a_wait 0x84 @ W04
	m4a_vol 0x1E
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_note_key 0xDB, 0x49 @ N12
	m4a_wait 0x84 @ W04
	m4a_vol 0x10
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2D
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEC, 0x49 @ N40
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_vol 0x2C
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_mod 0x00
	m4a_note_key 0xD7, 0x47 @ N08
	m4a_wait 0x88 @ W08
	m4a_mod 0x00
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_wait 0x98 @ W24
	m4a_note_key 0xE7, 0x4A @ N24
	m4a_wait 0x98 @ W24
	m4a_voice 0x0D
	m4a_vol 0x27
	m4a_note_key_vel 0xD7, 0x41, 0x58 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x47, 0x60 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x4A, 0x68 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_wait 0x82 @ W02
	m4a_note_key_vel 0xD1, 0x4E, 0x30 @ N02
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x34 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x38 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x68 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x68 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x38 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x30 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x2C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x24 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x30 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x34 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x38 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x68 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x68 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x38 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x30 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x2C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x24 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x30 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x34 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x43, 0x38 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x43, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x43, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x43, 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x43, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x68 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x43, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x68 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x38 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x30 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x2C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x45, 0x24 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x30 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x34 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x38 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x68 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x44, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x68 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x01
	m4a_note_key_vel 0xD3, 0x4E, 0x40 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x38 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x30 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4E, 0x2C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x46, 0x24 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_vol 0x2C
	m4a_note_key_vel 0xDF, 0x47, 0x70 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x53 @ N02
	m4a_wait 0x8A @ W10
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD5, 0x3E @ N06
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x46 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDD, 0x45 @ N14
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x9B @ W32
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD1, 0x40 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x47 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4D @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x50 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4D @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x47 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x49 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x44 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x4D @ N02
	m4a_wait 0x82 @ W02
	m4a_note_key 0xE5, 0x4E @ N22
	m4a_wait 0x96 @ W22
	m4a_note_key 0xE7, 0x50 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x52 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x11
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x8A @ W10
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x55 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x49 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x4C @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x49 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x45 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEC, 0x47 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD7, 0x4A @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x43 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF2, 0x4A @ N56
	m4a_wait 0x82 @ W02
	m4a_wait 0xA3 @ W56
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE3, 0x49 @ N20
	m4a_wait 0x94 @ W20
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key 0xE7, 0x48 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEC, 0x45 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xDF, 0x4F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEC, 0x56 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEC, 0x53 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x45 @ N16
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N16 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N16 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xDF @ N16
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4C @ N16 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_goto 0x088B272F
	m4a_fine
	m4a_running_note_key_vel_gate 0x00, 0x00, 0x00 @ N04 (running status)
	.globl SongHeader_MUS_SOOTOPOLIS
SongHeader_MUS_SOOTOPOLIS: @ 0x088B2B10
	@ M4A song header: song 445 (MUS_SOOTOPOLIS)
	m4a_song_header 8, 0, 0, 0xB2, VoiceGroup_JP_08618B9C
	.4byte SongTrack_MUS_SOOTOPOLIS_01
	.4byte SongTrack_MUS_SOOTOPOLIS_02
	.4byte SongTrack_MUS_SOOTOPOLIS_03
	.4byte SongTrack_MUS_SOOTOPOLIS_04
	.4byte SongTrack_MUS_SOOTOPOLIS_05
	.4byte SongTrack_MUS_SOOTOPOLIS_06
	.4byte SongTrack_MUS_SOOTOPOLIS_07
	.4byte SongTrack_MUS_SOOTOPOLIS_08

	.globl SongTrack_MUS_CONTEST_RESULTS_01
SongTrack_MUS_CONTEST_RESULTS_01: @ 0x088B2B38
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x40
	m4a_voice 0x7F
	m4a_lfos 0x2C
	m4a_pan 0x44
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x2E
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD1, 0x5B, 0x70 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xD1, 0x5B, 0x70 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x3C @ N02 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x5B, 0x40 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_patt 0x088B2B49
	m4a_patt 0x088B2B6B
	m4a_patt 0x088B2B49
	m4a_patt 0x088B2B6B
	m4a_patt 0x088B2B49
	m4a_patt 0x088B2B6B
	m4a_goto 0x088B2B49
	m4a_fine
	.globl SongTrack_MUS_CONTEST_RESULTS_02
SongTrack_MUS_CONTEST_RESULTS_02: @ 0x088B2BB5
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x18
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x39
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE3, 0x47, 0x70 @ N20
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x47 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4B @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x44 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x40 @ N08
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xE7, 0x42 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x41 @ N08
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x47 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_note_key 0xE7, 0x4C @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x40 @ N08
	m4a_note_key 0xD7, 0x4B @ N08
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_note_key 0xD7, 0x48 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x98 @ W24
	m4a_note_key 0xE7, 0x42 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x41 @ N08
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_goto 0x088B2BC2
	m4a_fine
	.globl SongTrack_MUS_CONTEST_RESULTS_03
SongTrack_MUS_CONTEST_RESULTS_03: @ 0x088B2C3B
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x26
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_pan 0x40
	m4a_vol 0x50
	m4a_bend 0x10
	m4a_note_key_vel 0xE7, 0x23, 0x70 @ N24
	m4a_wait 0x84 @ W04
	m4a_bend 0x20
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2E @ BEND (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x8C @ W12
	m4a_bend 0x40
	m4a_note_key_vel 0xEA, 0x28, 0x70 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD7, 0x27 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x28 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xEB @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xEA, 0x27, 0x70 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD7, 0x26 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x25 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x23 @ N16
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x22 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x23 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xEA, 0x25, 0x70 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x24 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x25 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x2A @ N16
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x28 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x27 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xE7, 0x23, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x22 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x23 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD7 @ N08
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD7 @ N08
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key 0xDB, 0x28 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x27 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x28 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xEB @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B2C68
	m4a_patt 0x088B2C7E
	m4a_patt 0x088B2C92
	m4a_goto 0x088B2C58
	m4a_fine
	.globl SongTrack_MUS_CONTEST_RESULTS_04
SongTrack_MUS_CONTEST_RESULTS_04: @ 0x088B2CC9
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x18
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x42
	m4a_vol 0x32
	m4a_note_key_vel 0xE7, 0x42, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD7, 0x50, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x52 @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD7, 0x52, 0x20 @ N08
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD3, 0x53, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x52 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD7, 0x52, 0x20 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xE7, 0x50, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEF, 0x4E @ N48
	m4a_wait 0x98 @ W24
	m4a_vol 0x30
	m4a_mod 0x06
	m4a_wait 0x81 @ W01
	m4a_vol 0x2D
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_mod 0x00
	m4a_note_key 0xD7, 0x53 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x53, 0x20 @ N08 (running status)
	m4a_wait 0x9D @ W40
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x4C, 0x70 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD7, 0x4E, 0x20 @ N08
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD3, 0x50, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEA, 0x4C @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xEF, 0x4B @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_vol 0x30
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_vol 0x31
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x4E, 0x20 @ N08 (running status)
	m4a_wait 0x9D @ W40
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD3, 0x50, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x52 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x53 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x52 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x52, 0x20 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x53, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x53 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x53, 0x20 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x55, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x57, 0x64 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x57, 0x20 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x53, 0x60 @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD7, 0x53, 0x20 @ N08
	m4a_wait 0x99 @ W28
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x58, 0x64 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x57 @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD7, 0x57, 0x20 @ N08
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD3, 0x53, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD7, 0x54, 0x20 @ N08
	m4a_wait 0x94 @ W20
	m4a_note_key_vel 0xD3, 0x55, 0x70 @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD7, 0x55, 0x20 @ N08
	m4a_wait 0x94 @ W20
	m4a_running_note_key_vel 0x53, 0x70 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x53, 0x20 @ N08 (running status)
	m4a_wait 0xAD @ W88
	m4a_goto 0x088B2CD9
	m4a_fine
	.globl SongTrack_MUS_CONTEST_RESULTS_05
SongTrack_MUS_CONTEST_RESULTS_05: @ 0x088B2DB7
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x02
	m4a_vol 0x2E
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE3, 0x40, 0x70 @ N20
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD7, 0x3A, 0x70 @ N08
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD7, 0x38, 0x70 @ N08
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3A @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xE7, 0x39, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x38 @ N08
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key 0xDB, 0x40 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_patt 0x088B2DD5
	m4a_patt 0x088B2DE0
	m4a_patt 0x088B2DEB
	m4a_goto 0x088B2DC9
	m4a_fine
	.globl SongTrack_MUS_CONTEST_RESULTS_06
SongTrack_MUS_CONTEST_RESULTS_06: @ 0x088B2E1B
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x2D
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE3, 0x44, 0x70 @ N20
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x46 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD7, 0x3D, 0x70 @ N08
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3F @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD7, 0x3B, 0x70 @ N08
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xE7, 0x3D, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x90 @ W16
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3F @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD7 @ N08
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x44 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x46 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_patt 0x088B2E3A
	m4a_patt 0x088B2E45
	m4a_patt 0x088B2E50
	m4a_goto 0x088B2E2D
	m4a_fine
	.globl SongTrack_MUS_CONTEST_RESULTS_07
SongTrack_MUS_CONTEST_RESULTS_07: @ 0x088B2E7F
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_vol 0x46
	m4a_pan 0x40
	m4a_note_key_vel 0xD3, 0x26, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x24 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x24, 0x70 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x24, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x24, 0x70 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD3, 0x24, 0x70 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x24, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x24, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x26, 0x58 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x24, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_patt 0x088B2E8F
	m4a_note_key_vel 0xD3, 0x24, 0x70 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x24, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x24, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x24 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B2E8F
	m4a_patt 0x088B2EA0
	m4a_patt 0x088B2E8F
	m4a_note_key_vel 0xD3, 0x24, 0x70 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x24, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x24, 0x70 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x24, 0x58 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_goto 0x088B2E8F
	m4a_fine
	.globl SongTrack_MUS_CONTEST_RESULTS_08
SongTrack_MUS_CONTEST_RESULTS_08: @ 0x088B2EFA
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x22
	m4a_wait 0x98 @ W24
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD7, 0x50, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x52 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x52 @ N16
	m4a_wait 0x98 @ W24
	m4a_note_key 0xE7, 0x50 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEF, 0x4E @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD7, 0x53 @ N08
	m4a_wait 0xA0 @ W48
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEA, 0x4C @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xEF, 0x4B @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x90 @ W16
	m4a_bend 0x41
	m4a_wait 0x9B @ W32
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x50 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x52 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x53 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x52 @ N08 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x88 @ W08
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x53 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x55 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x57 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x9B @ W32
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x58 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x57 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x54 @ N04 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x53 @ N08
	m4a_wait 0xB0 @ W96
	m4a_goto 0x088B2F0C
	m4a_fine
	m4a_running_note_key_vel 0x00, 0x00 @ N08 (running status)
	.globl SongHeader_MUS_CONTEST_RESULTS
SongHeader_MUS_CONTEST_RESULTS: @ 0x088B2F74
	@ M4A song header: song 446 (MUS_CONTEST_RESULTS)
	m4a_song_header 8, 0, 0, 0xB2, VoiceGroup_JP_0861919C
	.4byte SongTrack_MUS_CONTEST_RESULTS_01
	.4byte SongTrack_MUS_CONTEST_RESULTS_02
	.4byte SongTrack_MUS_CONTEST_RESULTS_03
	.4byte SongTrack_MUS_CONTEST_RESULTS_04
	.4byte SongTrack_MUS_CONTEST_RESULTS_05
	.4byte SongTrack_MUS_CONTEST_RESULTS_06
	.4byte SongTrack_MUS_CONTEST_RESULTS_07
	.4byte SongTrack_MUS_CONTEST_RESULTS_08

	.globl SongTrack_MUS_HALL_OF_FAME_ROOM_01
SongTrack_MUS_HALL_OF_FAME_ROOM_01: @ 0x088B2F9C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x39
	m4a_voice 0x2E
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x2F
	m4a_pan 0x20
	m4a_wait 0x98 @ W24
	m4a_pan 0x16
	m4a_note_key_vel 0xD3, 0x46, 0x70 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x37 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x33 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x37 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x4B @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x57 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x69
	m4a_note_key 0xD3, 0x52 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x32 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x2D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x32 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x3A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x37 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x33 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x33 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x37 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x3A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x69
	m4a_note_key 0xD3, 0x3F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x37 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x33 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x30 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x35 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x41 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x41 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x84 @ W04
	m4a_pan 0x69
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x4D @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x59 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x52 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x4D @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x69
	m4a_note_key 0xD3, 0x58 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x55 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x43 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x37 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x43 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x69
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x39 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x69
	m4a_note_key 0xD3, 0x3F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x52 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x69
	m4a_note_key 0xD3, 0x41 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x4D @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x52 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x69
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x60
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key 0xD3, 0x4A @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x16
	m4a_note_key 0xD3, 0x4E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_goto 0x088B2FAB
	m4a_fine
	.globl SongTrack_MUS_HALL_OF_FAME_ROOM_02
SongTrack_MUS_HALL_OF_FAME_ROOM_02: @ 0x088B3360
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x30
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x4B
	m4a_vol 0x1F
	m4a_note_key_vel 0xD3, 0x40, 0x70 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xFF, 0x4A, 0x70 @ N96
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x49 @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xFC, 0x4A @ N88
	m4a_wait 0xAD @ W88
	m4a_note_key 0xD7, 0x4B @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xFF, 0x4C @ N96
	m4a_wait 0xB0 @ W96
	m4a_tie_key 0x4D @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_tie_key 0x4C @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_note_key 0xFF, 0x4A @ N96
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x49 @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x4A @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x4C @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_tie_key 0x4D @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_tie_key 0x4C @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_goto 0x088B337A
	m4a_fine
	.globl SongTrack_MUS_HALL_OF_FAME_ROOM_03
SongTrack_MUS_HALL_OF_FAME_ROOM_03: @ 0x088B33AC
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x24
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_pan 0x40
	m4a_vol 0x43
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD3, 0x26, 0x70 @ N04
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note 0xD3 @ N04
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x32 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x30 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x24 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x26 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B33BD
	m4a_note_key_vel 0xD3, 0x26, 0x70 @ N04
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x30 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x32 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x2B @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B33BD
	m4a_patt 0x088B33BD
	m4a_patt 0x088B33BD
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2D @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x30 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x32 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x2D @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x2B @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x27 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x24 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x26 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEA, 0x27 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x22 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x27 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x22 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x27 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE7, 0x32 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x34 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x32 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2D @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x2A @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x26 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEA, 0x2E @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x2B @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2B @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x2B @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEA, 0x2D @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x30 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x2E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEA, 0x30 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD7, 0x29 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEC, 0x32 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD3, 0x2E @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x29 @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2E @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x30 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE7, 0x32 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x35 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x34 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x33 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x32 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xDF, 0x34 @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x31 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2D @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2A @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2D @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x31 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEA, 0x34 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD7, 0x33 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x32 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x31 @ N48
	m4a_wait 0xA0 @ W48
	m4a_goto 0x088B33BD
	m4a_fine
	.globl SongTrack_MUS_HALL_OF_FAME_ROOM_04
SongTrack_MUS_HALL_OF_FAME_ROOM_04: @ 0x088B34B3
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x30
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x35
	m4a_vol 0x1F
	m4a_note_key_vel 0xD3, 0x3A, 0x70 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x36
	m4a_vol 0x1F
	m4a_note_key_vel 0xFF, 0x43, 0x70 @ N96
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x42 @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x43 @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x45 @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_tie_key 0x46 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_tie_key 0x45 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_voice 0x3C
	m4a_pan 0x40
	m4a_vol 0x32
	m4a_note_key 0xEC, 0x43 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD7, 0x3F @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3A @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3F @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x46 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEC, 0x45 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEF, 0x45 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xEA, 0x46 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x48 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xD7, 0x43 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3F @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x43 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x46 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDB, 0x48 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEC, 0x48 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEC, 0x4A @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x41 @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x46 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x48 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE7, 0x4A @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x41 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x4A @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xE7, 0x49 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4B @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x49 @ N24
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xFF, 0x49 @ N96
	m4a_wait 0xB0 @ W96
	m4a_goto 0x088B34CD
	m4a_fine
	.globl SongTrack_MUS_HALL_OF_FAME_ROOM_05
SongTrack_MUS_HALL_OF_FAME_ROOM_05: @ 0x088B355C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x00
	m4a_vol 0x22
	m4a_note_key_vel 0xD3, 0x37, 0x70 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xFF, 0x3F, 0x70 @ N96
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x3E @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x3F @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x41 @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_tie_key 0x43 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_tie_key 0x42 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_note_key_vel 0xEA, 0x3F, 0x70 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x43 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xD7, 0x3A @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x37 @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3A @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3F @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_pend
	m4a_note_key 0xEC, 0x3E @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD7, 0x39 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x36 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x32 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_patt 0x088B358F
	m4a_note_key_vel 0xEC, 0x41, 0x70 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD7, 0x3C @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD3, 0x35 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEC, 0x41 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3A @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3E @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x41 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x3A @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x41 @ N48
	m4a_wait 0xA0 @ W48
	m4a_tie_key 0x42 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_goto 0x088B357B
	m4a_fine
	.globl SongTrack_MUS_HALL_OF_FAME_ROOM_06
SongTrack_MUS_HALL_OF_FAME_ROOM_06: @ 0x088B35FF
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x22
	m4a_note_key_vel 0xD3, 0x3D, 0x70 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xFF, 0x46, 0x70 @ N96
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x45 @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x46 @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x48 @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_tie_key 0x4A @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_tie_key 0x49 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_note_key 0xEA, 0x46 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x48 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x46 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xD7, 0x43 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3F @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x43 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x46 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEC, 0x45 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x39 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x3E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEA, 0x43 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x46 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xD7, 0x3F @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3A @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3F @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x43 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEC, 0x45 @ N40
	m4a_wait 0x9D @ W40
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x41 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD3, 0x3C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4D @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEC, 0x46 @ N40
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD3, 0x41 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x3E @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x41 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x46 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x46 @ N48
	m4a_wait 0xA0 @ W48
	m4a_tie_key 0x45 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_goto 0x088B361E
	m4a_fine
	.globl SongTrack_MUS_HALL_OF_FAME_ROOM_07
SongTrack_MUS_HALL_OF_FAME_ROOM_07: @ 0x088B36AB
	@ M4A track start proven by song header pointer

	m4a_vol 0x50
	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD3, 0x26, 0x70 @ N04
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_patt 0x088B36BB
	m4a_patt 0x088B36BB
	m4a_patt 0x088B36BB
	m4a_patt 0x088B36BB
	m4a_patt 0x088B36BB
	m4a_patt 0x088B36BB
	m4a_patt 0x088B36BB
	m4a_note_key_vel 0xD3, 0x26, 0x70 @ N04
	m4a_wait 0x98 @ W24
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x32 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_patt 0x088B36F1
	m4a_patt 0x088B36F1
	m4a_patt 0x088B36F1
	m4a_patt 0x088B36F1
	m4a_patt 0x088B36F1
	m4a_patt 0x088B36F1
	m4a_patt 0x088B36F1
	m4a_goto 0x088B36BB
	m4a_fine
	m4a_running_note_key_vel_gate 0x00, 0x00, 0x00 @ N04 (running status)
	.globl SongHeader_MUS_HALL_OF_FAME_ROOM
SongHeader_MUS_HALL_OF_FAME_ROOM: @ 0x088B3730
	@ M4A song header: song 447 (MUS_HALL_OF_FAME_ROOM)
	m4a_song_header 7, 0, 0, 0xB2, VoiceGroup_JP_0861979C
	.4byte SongTrack_MUS_HALL_OF_FAME_ROOM_01
	.4byte SongTrack_MUS_HALL_OF_FAME_ROOM_02
	.4byte SongTrack_MUS_HALL_OF_FAME_ROOM_03
	.4byte SongTrack_MUS_HALL_OF_FAME_ROOM_04
	.4byte SongTrack_MUS_HALL_OF_FAME_ROOM_05
	.4byte SongTrack_MUS_HALL_OF_FAME_ROOM_06
	.4byte SongTrack_MUS_HALL_OF_FAME_ROOM_07

	.globl SongTrack_MUS_TRICK_HOUSE_01
SongTrack_MUS_TRICK_HOUSE_01: @ 0x088B3754
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x44
	m4a_voice 0x7F
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x28
	m4a_pan 0x40
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD2, 0x5B, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x34 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x34 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x4C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x38 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x48 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x34 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x34 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x34 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x4C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x38 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x48 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x34 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_patt 0x088B3763
	m4a_goto 0x088B3763
	m4a_fine
	.globl SongTrack_MUS_TRICK_HOUSE_02
SongTrack_MUS_TRICK_HOUSE_02: @ 0x088B380E
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x0D
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x2C
	m4a_note_key_vel 0xD2, 0x52, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4E, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x53, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x50, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x54, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x51, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x55, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x52, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x0D
	m4a_vol 0x2D
	m4a_note_key_vel 0xD5, 0x52, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x52, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x18
	m4a_vol 0x1E
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x44 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x55 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x61 @ N06
	m4a_wait 0x8C @ W12
	m4a_voice 0x2F
	m4a_vol 0x2D
	m4a_note_key 0xD5, 0x3D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x31 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x31, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3D, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x0D
	m4a_note_key_vel 0xD5, 0x50, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_note_key_vel 0xD5, 0x50, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x11
	m4a_vol 0x2A
	m4a_note_key 0xD2, 0x52 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x5A @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD2, 0x55, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4E, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x38
	m4a_vol 0x2D
	m4a_note_key 0xD2, 0x4E @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4D @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4E @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x53 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x5A @ N03
	m4a_wait 0x86 @ W06
	m4a_voice 0x0D
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B3889
	m4a_note_key_vel 0xD5, 0x55, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x3C
	m4a_note_key 0xD2, 0x59 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x59 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x59 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x59 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x5C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x5B, 0x5C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5A, 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x58, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x56, 0x40 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_patt 0x088B38DC
	m4a_patt 0x088B3901
	m4a_note_key_vel 0xD5, 0x55, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_voice 0x11
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x59 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x15
	m4a_vol 0x24
	m4a_note_key 0xEA, 0x4E @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEA, 0x4E @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEA, 0x4B @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x49 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4A @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4B @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEA, 0x4E @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x55 @ N24
	m4a_wait 0x9A @ W30
	m4a_note_key 0xD5, 0x57 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note_key 0xE1, 0x52 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xE7, 0x4F @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_goto 0x088B3863
	m4a_fine
	.globl SongTrack_MUS_TRICK_HOUSE_03
SongTrack_MUS_TRICK_HOUSE_03: @ 0x088B3A9C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x15
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x20
	m4a_vol 0x26
	m4a_note_key_vel 0xD2, 0x46, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x42, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x47, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x44, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x48, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x45, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x49, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x46, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_wait 0xA0 @ W48
	m4a_voice 0x38
	m4a_note_key_vel 0xD5, 0x4E, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x60
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x60
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x20
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_wait 0xA2 @ W54
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x11
	m4a_note_key 0xD2, 0x4E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x55 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD2, 0x52, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x49, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x38
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4E @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x86 @ W06
	m4a_voice 0x0E
	m4a_vol 0x1E
	m4a_pan 0x0C
	m4a_note_key 0xEF, 0x46 @ N48
	m4a_wait 0xA0 @ W48
	m4a_pan 0x6F
	m4a_note_key 0xEF, 0x42 @ N48
	m4a_wait 0xA0 @ W48
	m4a_pan 0x0F
	m4a_note_key 0xEF, 0x46 @ N48
	m4a_wait 0xA0 @ W48
	m4a_pan 0x72
	m4a_note_key 0xEF, 0x42 @ N48
	m4a_wait 0xA0 @ W48
	m4a_pan 0x0F
	m4a_note_key 0xEF, 0x46 @ N48
	m4a_wait 0xA0 @ W48
	m4a_pan 0x6F
	m4a_note_key 0xEF, 0x49 @ N48
	m4a_wait 0xA0 @ W48
	m4a_voice 0x38
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x59 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x58, 0x5C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x57, 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x55, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x53, 0x40 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_voice 0x49
	m4a_vol 0x19
	m4a_pan 0x15
	m4a_note_key_vel 0xD5, 0x55, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x24
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x83 @ W03
	m4a_pan 0x30
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x57 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x4D
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x60
	m4a_note_key 0xD5, 0x57 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x68
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x57 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x7F
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_vol 0x1C
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_vol 0x28
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_vol 0x23
	m4a_pan 0x6F
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x60
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x57 @ N06
	m4a_wait 0x86 @ W06
	m4a_vol 0x1A
	m4a_pan 0x4A
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x30
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x83 @ W03
	m4a_vol 0x1F
	m4a_wait 0x83 @ W03
	m4a_pan 0x1E
	m4a_note_key 0xD5, 0x59 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x0F
	m4a_vol 0x27
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x2F
	m4a_pan 0x6F
	m4a_vol 0x38
	m4a_note_key 0xD5, 0x3D @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x15
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x6F
	m4a_note_key 0xD5, 0x3B @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x15
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x6F
	m4a_note_key 0xD5, 0x3A @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x15
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x6F
	m4a_note_key 0xD5, 0x38 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x15
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_voice 0x11
	m4a_pan 0x40
	m4a_vol 0x1E
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x49 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x0D
	m4a_pan 0x10
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x70
	m4a_note_key 0xD5, 0x57 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x53 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x83 @ W03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x10
	m4a_note_key 0xD5, 0x59 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x83 @ W03
	m4a_pan 0x10
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x70
	m4a_note_key 0xD5, 0x57 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x53 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x83 @ W03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x10
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x52 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x83 @ W03
	m4a_pan 0x10
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x70
	m4a_note_key 0xD5, 0x5A @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x57 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x83 @ W03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x10
	m4a_note_key 0xD5, 0x57 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x83 @ W03
	m4a_pan 0x10
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x53 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x89 @ W09
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x70
	m4a_note_key 0xD5, 0x59 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x83 @ W03
	m4a_pan 0x10
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B3AF1
	m4a_fine
	.globl SongTrack_MUS_TRICK_HOUSE_04
SongTrack_MUS_TRICK_HOUSE_04: @ 0x088B3DFE
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x02
	m4a_vol 0x20
	m4a_note_key_vel 0xE7, 0x46, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pan 0x01
	m4a_vol 0x21
	m4a_note_key_vel 0xD2, 0x42, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x42, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3A, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x3A, 0x50 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x42, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x42, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3A, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x3A, 0x50 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x42, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x42, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3A, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x3A, 0x50 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x42, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x42, 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3A, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x3A, 0x50 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x42, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x42, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3A, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x3A, 0x50 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x42, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x42, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3A, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x3A, 0x50 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x42, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x42, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3A, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x3A, 0x50 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x42, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x42, 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3A, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x3A, 0x50 @ N06
	m4a_wait 0x89 @ W09
	m4a_pend
	m4a_patt 0x088B3E55
	m4a_note_key_vel 0xD5, 0x44, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x41 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x50 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x5C @ N06
	m4a_wait 0x8F @ W15
	m4a_running_note_key 0x31 @ N06 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x89 @ W09
	m4a_running_note_key 0x31 @ N06 (running status)
	m4a_wait 0x89 @ W09
	m4a_note_key 0xD2, 0x25 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD2, 0x44 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x50 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B3E55
	m4a_patt 0x088B3E55
	m4a_patt 0x088B3E55
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD2, 0x49, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x49 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x49 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x49 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4D @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x4C, 0x5C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4B, 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x49, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x47, 0x40 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_patt 0x088B3E55
	m4a_patt 0x088B3E55
	m4a_patt 0x088B3E55
	m4a_wait 0xB0 @ W96
	m4a_pan 0x40
	m4a_vol 0x20
	m4a_bend 0x42
	m4a_note_key_vel 0xEA, 0x57, 0x70 @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEA, 0x55 @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEA, 0x53 @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x52 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x53 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x55 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pan 0x40
	m4a_note_key 0xEA, 0x57 @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x5E @ N24
	m4a_wait 0x9A @ W30
	m4a_note_key 0xD5, 0x5F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5E @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note_key 0xE1, 0x5B @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xE7, 0x57 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD5, 0x5A @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_goto 0x088B3E19
	m4a_bend 0x40
	m4a_fine
	.globl SongTrack_MUS_TRICK_HOUSE_05
SongTrack_MUS_TRICK_HOUSE_05: @ 0x088B3FCF
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x22
	m4a_note_key_vel 0xE7, 0x3D, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x38 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x35 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pan 0x7F
	m4a_vol 0x24
	m4a_note_key_vel 0xD2, 0x49, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x42, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x42, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x42, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x42, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x49, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x42, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x42, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x42, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x49, 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x42, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B401F
	m4a_note_key_vel 0xD5, 0x49, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x44 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x55 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x61 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x3D @ N06
	m4a_wait 0x8C @ W12
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xD2, 0x49 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B401F
	m4a_patt 0x088B401F
	m4a_patt 0x088B401F
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD2, 0x4D, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x4F, 0x5C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4E, 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4C, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4A, 0x40 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_patt 0x088B401F
	m4a_patt 0x088B401F
	m4a_patt 0x088B401F
	m4a_wait 0xB0 @ W96
	m4a_pan 0x40
	m4a_vol 0x24
	m4a_note_key_vel 0xEA, 0x57, 0x70 @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEA, 0x55 @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEA, 0x53 @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x52 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x53 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x55 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pan 0x40
	m4a_note_key 0xEA, 0x57 @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note_key 0xE7, 0x5E @ N24
	m4a_wait 0x9A @ W30
	m4a_note_key 0xD5, 0x5F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5E @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note_key 0xE1, 0x5B @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xE7, 0x57 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD5, 0x5A @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_goto 0x088B3FEA
	m4a_fine
	.globl SongTrack_MUS_TRICK_HOUSE_06
SongTrack_MUS_TRICK_HOUSE_06: @ 0x088B417C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_vol 0x46
	m4a_pan 0x40
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x58 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x24, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x60 @ N06 (running status)
	m4a_note_key_vel 0xD5, 0x3E, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x24, 0x64 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x24, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x58 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x24, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x40, 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_patt 0x088B4185
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x24, 0x58 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x24, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x64 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x3E, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x58 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x24, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x40, 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B4185
	m4a_fine
	.globl SongTrack_MUS_TRICK_HOUSE_07
SongTrack_MUS_TRICK_HOUSE_07: @ 0x088B423C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x3B
	m4a_bend 0x40
	m4a_note_key_vel 0xE7, 0x31, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2F @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x25 @ N24 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x2A, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x33 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B425E
	m4a_patt 0x088B425E
	m4a_note_key_vel 0xD2, 0x25, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x25 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x33 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B4284
	m4a_patt 0x088B4284
	m4a_note_key_vel 0xD2, 0x25, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2C @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x25 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x35 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x36 @ N06
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B425E
	m4a_patt 0x088B425E
	m4a_patt 0x088B425E
	m4a_patt 0x088B4284
	m4a_patt 0x088B4284
	m4a_patt 0x088B4284
	m4a_note_key_vel 0xD2, 0x25, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2C @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x25 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2C @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x38 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x36 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x2F, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x33 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x36 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2F @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x3A @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x36 @ N06
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x35 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x29 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x29 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x35 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2A @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B4330
	m4a_note_key_vel 0xD2, 0x2A, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2E @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x31 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x28 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x27 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x33 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2E @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2C @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x33 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x33 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x35 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x25 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x27 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x25 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2A @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_goto 0x088B425E
	m4a_fine
	.globl SongTrack_MUS_TRICK_HOUSE_08
SongTrack_MUS_TRICK_HOUSE_08: @ 0x088B43EE
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x0D
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x27
	m4a_pan 0x50
	m4a_wait 0xB0 @ W96
	m4a_voice 0x38
	m4a_pan 0x50
	m4a_wait 0xA0 @ W48
	m4a_running_cmd_u8 0x15 @ PAN (running status)
	m4a_note_key_vel 0xD5, 0x49, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x6F
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_wait 0xA0 @ W48
	m4a_pan 0x70
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x13
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x09
	m4a_pan 0x30
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_wait 0xB0 @ W96
	m4a_voice 0x0D
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x1A
	m4a_note_key_vel 0xD5, 0x61, 0x50 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_wait 0xB0 @ W96
	m4a_vol 0x20
	m4a_note_key_vel 0xD5, 0x52, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x42 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x38
	m4a_vol 0x25
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x4F, 0x5C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4E, 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4C, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4A, 0x40 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_voice 0x0D
	m4a_vol 0x22
	m4a_note_key_vel 0xD5, 0x50, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x30
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_voice 0x2F
	m4a_pan 0x63
	m4a_vol 0x38
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x1F
	m4a_note_key 0xDB, 0x3D @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x62
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x20
	m4a_note_key 0xD5, 0x3D @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x62
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x1F
	m4a_note_key 0xD5, 0x36 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x68
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x86 @ W06
	m4a_voice 0x0D
	m4a_vol 0x28
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x63, 0x5C @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x63 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x61 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x61 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x60 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x61 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x63 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x66 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x63 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x61 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5E @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x61 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x61 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5E @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B43FB
	m4a_fine
	m4a_running_note_key 0x00 @ N06 (running status)
	.globl SongHeader_MUS_TRICK_HOUSE
SongHeader_MUS_TRICK_HOUSE: @ 0x088B4610
	@ M4A song header: song 448 (MUS_TRICK_HOUSE)
	m4a_song_header 8, 0, 0, 0xB2, VoiceGroup_JP_08619D9C
	.4byte SongTrack_MUS_TRICK_HOUSE_01
	.4byte SongTrack_MUS_TRICK_HOUSE_02
	.4byte SongTrack_MUS_TRICK_HOUSE_03
	.4byte SongTrack_MUS_TRICK_HOUSE_04
	.4byte SongTrack_MUS_TRICK_HOUSE_05
	.4byte SongTrack_MUS_TRICK_HOUSE_06
	.4byte SongTrack_MUS_TRICK_HOUSE_07
	.4byte SongTrack_MUS_TRICK_HOUSE_08

	.globl SongTrack_MUS_ENCOUNTER_TWINS_01
SongTrack_MUS_ENCOUNTER_TWINS_01: @ 0x088B4638
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x43
	m4a_voice 0x7F
	m4a_lfos 0x2C
	m4a_pan 0x40
	m4a_vol 0x27
	m4a_note_key_vel 0xD2, 0x58, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x58, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x44 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x58, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x58 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x48 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x60 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x60 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x58 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x58 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x58 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x48 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x60 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x60 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x58 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x58, 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x58, 0x54 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_goto 0x088B4670
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_TWINS_02
SongTrack_MUS_ENCOUNTER_TWINS_02: @ 0x088B46E3
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x7E
	m4a_lfos 0x2C
	m4a_pan 0x40
	m4a_vol 0x27
	m4a_wait 0xB0 @ W96
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD5, 0x5B, 0x60 @ N06
	m4a_wait 0xA8 @ W72
	m4a_wait 0xB0 @ W96
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x5B, 0x50 @ N06
	m4a_wait 0xA0 @ W48
	m4a_running_note_key_vel 0x5B, 0x60 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_wait 0xAC @ W84
	m4a_running_note_key_vel 0x5B, 0x54 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0xA4 @ W60
	m4a_goto 0x088B46F3
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_TWINS_03
SongTrack_MUS_ENCOUNTER_TWINS_03: @ 0x088B4709
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x26
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_pan 0x40
	m4a_vol 0x4B
	m4a_bend 0x3E
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0xAF @ W92
	m4a_wait 0x81 @ W01
	m4a_note_key_vel 0xF1, 0x26, 0x70 @ N54
	m4a_wait 0x86 @ W06
	m4a_bend 0x43
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x43 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x30 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x2B, 0x70 @ N24
	m4a_wait 0x86 @ W06
	m4a_bend 0x43
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x32 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x26 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2D @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x28 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x29 @ N24
	m4a_wait 0x86 @ W06
	m4a_bend 0x43
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x26 @ N36
	m4a_wait 0x86 @ W06
	m4a_bend 0x43
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x43 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x2F @ N24
	m4a_wait 0x86 @ W06
	m4a_bend 0x43
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x32 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x26 @ N36
	m4a_wait 0x86 @ W06
	m4a_bend 0x43
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x43 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x28 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x29 @ N24
	m4a_wait 0x86 @ W06
	m4a_bend 0x43
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x27 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x26 @ N24
	m4a_wait 0x86 @ W06
	m4a_bend 0x43
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x43 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_goto 0x088B472F
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_TWINS_04
SongTrack_MUS_ENCOUNTER_TWINS_04: @ 0x088B47A9
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x18
	m4a_lfos 0x2C
	m4a_pan 0x1D
	m4a_vol 0x2E
	m4a_note_key_vel 0xD5, 0x45, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x36 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xF3, 0x45 @ N60
	m4a_wait 0xA4 @ W60
	m4a_note_key 0xD5, 0x3B @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x3E, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x3E, 0x44 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x3E, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x41 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x42 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x32 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x3C @ N24
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x3B @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x3B @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x42 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x3C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x30 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x35 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x36 @ N24
	m4a_wait 0x86 @ W06
	m4a_bend 0x38
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x43 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B47D5
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_TWINS_05
SongTrack_MUS_ENCOUNTER_TWINS_05: @ 0x088B4851
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x18
	m4a_lfos 0x2C
	m4a_vol 0x37
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x55, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_note 0xD2 @ N03
	m4a_wait 0xA4 @ W60
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD2, 0x49, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x55, 0x50 @ N03 (running status)
	m4a_wait 0x9C @ W36
	m4a_goto 0x088B4861
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_TWINS_06
SongTrack_MUS_ENCOUNTER_TWINS_06: @ 0x088B4872
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x18
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x38
	m4a_bend 0x40
	m4a_note_key_vel 0xD5, 0x4A, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD2, 0x42 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xF3, 0x4A @ N60
	m4a_wait 0x86 @ W06
	m4a_bend 0x48
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x48 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x42 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xE7, 0x47, 0x70 @ N24
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x42 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xEB, 0x48 @ N36
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x42 @ N24
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x47 @ N24
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x42 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD2, 0x32, 0x50 @ N03
	m4a_note_key 0xD5, 0x56 @ N06
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x36, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x86 @ W06
	m4a_bend 0x38
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x43 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B48B4
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_TWINS_07
SongTrack_MUS_ENCOUNTER_TWINS_07: @ 0x088B4932
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_vol 0x28
	m4a_pan 0x02
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD2, 0x45, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x3E @ N36
	m4a_wait 0xA8 @ W72
	m4a_pan 0x40
	m4a_note_key_vel 0xD2, 0x3E, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x41, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x3E, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x3C, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x40, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x3C, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x35 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x41, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x3E, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B496B
	m4a_goto 0x088B494F
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_TWINS_08
SongTrack_MUS_ENCOUNTER_TWINS_08: @ 0x088B49A9
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_pan 0x7F
	m4a_vol 0x28
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD2, 0x4E, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x45 @ N36
	m4a_wait 0xA8 @ W72
	m4a_pan 0x7F
	m4a_note_key_vel 0xD2, 0x43, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x47, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x00
	m4a_note_key_vel 0xD2, 0x43, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pan 0x01
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_pan 0x7F
	m4a_note_key_vel 0xD2, 0x45, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x47, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x01
	m4a_note_key_vel 0xD2, 0x41, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key 0xD2, 0x42 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pan 0x01
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B49C6
	m4a_patt 0x088B49EC
	m4a_goto 0x088B49C6
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_TWINS_09
SongTrack_MUS_ENCOUNTER_TWINS_09: @ 0x088B4A22
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_vol 0x3A
	m4a_pan 0x40
	m4a_note_key_vel 0xD5, 0x40, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x3E, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3E, 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x3E, 0x70 @ N06 (running status)
	m4a_wait 0xA8 @ W72
	m4a_note_key_vel 0xD5, 0x40, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x40, 0x48 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x3E, 0x70 @ N06 (running status)
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x40, 0x48 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x3E, 0x70 @ N06 (running status)
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x9C @ W36
	m4a_patt 0x088B4A49
	m4a_note_key_vel 0xD5, 0x40, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x40, 0x48 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x3E, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_goto 0x088B4A49
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_TWINS_10
SongTrack_MUS_ENCOUNTER_TWINS_10: @ 0x088B4A7D
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_vol 0x1B
	m4a_pan 0x40
	m4a_bend 0x42
	m4a_note_key_vel 0xD5, 0x4A, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD2, 0x42 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xF3, 0x4A @ N60
	m4a_wait 0xA4 @ W60
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x42 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x47, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x42 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE1, 0x48 @ N18
	m4a_wait 0x8C @ W12
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x42 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x32 @ N03
	m4a_note_key 0xD5, 0x56 @ N06
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD2, 0x36 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x3E @ N06
	m4a_wait 0x98 @ W24
	m4a_goto 0x088B4AB9
	m4a_fine
	.globl SongHeader_MUS_ENCOUNTER_TWINS
SongHeader_MUS_ENCOUNTER_TWINS: @ 0x088B4B18
	@ M4A song header: song 449 (MUS_ENCOUNTER_TWINS)
	m4a_song_header 10, 0, 0, 0xB2, VoiceGroup_JP_0861A39C
	.4byte SongTrack_MUS_ENCOUNTER_TWINS_01
	.4byte SongTrack_MUS_ENCOUNTER_TWINS_02
	.4byte SongTrack_MUS_ENCOUNTER_TWINS_03
	.4byte SongTrack_MUS_ENCOUNTER_TWINS_04
	.4byte SongTrack_MUS_ENCOUNTER_TWINS_05
	.4byte SongTrack_MUS_ENCOUNTER_TWINS_06
	.4byte SongTrack_MUS_ENCOUNTER_TWINS_07
	.4byte SongTrack_MUS_ENCOUNTER_TWINS_08
	.4byte SongTrack_MUS_ENCOUNTER_TWINS_09
	.4byte SongTrack_MUS_ENCOUNTER_TWINS_10

	.globl SongTrack_MUS_ENCOUNTER_ELITE_FOUR_01
SongTrack_MUS_ENCOUNTER_ELITE_FOUR_01: @ 0x088B4B48
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x43
	m4a_voice 0x7F
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x33
	m4a_pan 0x7E
	m4a_wait 0x98 @ W24
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x5B, 0x48 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B4B57
	m4a_patt 0x088B4B57
	m4a_patt 0x088B4B57
	m4a_patt 0x088B4B57
	m4a_patt 0x088B4B57
	m4a_patt 0x088B4B57
	m4a_patt 0x088B4B57
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_goto 0x088B4B57
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_ELITE_FOUR_02
SongTrack_MUS_ENCOUNTER_ELITE_FOUR_02: @ 0x088B4B98
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x26
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_pan 0x40
	m4a_vol 0x4E
	m4a_wait 0x98 @ W24
	m4a_voice 0x26
	m4a_bend 0x3B
	m4a_note_key_vel 0xDB, 0x23, 0x70 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2A @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x24 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3C
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x23 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x9C @ W36
	m4a_bend 0x3A
	m4a_note_key 0xE7, 0x24 @ N24
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x92 @ W18
	m4a_running_cmd_u8 0x3B @ BEND (running status)
	m4a_note_key 0xDB, 0x23 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2A @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x24 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3C
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x23 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x9C @ W36
	m4a_bend 0x3A
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD5, 0x24 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x3B
	m4a_note_key_vel 0xDB, 0x26, 0x70 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2C @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x31 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2D @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x27 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3C
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_note_key 0xDB, 0x26 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x21 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3A
	m4a_note_key 0xE7, 0x27 @ N24
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x92 @ W18
	m4a_patt 0x088B4C44
	m4a_bend 0x3B
	m4a_note_key_vel 0xDB, 0x26, 0x70 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2C @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x21 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x22 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_bend 0x3B
	m4a_note_key_vel 0xD5, 0x26, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD2, 0x32 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x32 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x25 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD2, 0x2C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD2, 0x2B @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_note_key 0xD5, 0x30 @ N06
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD2, 0x23 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x23 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_bend 0x3C
	m4a_note_key 0xD2, 0x23 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_bend 0x40
	m4a_note_key 0xD2, 0x23 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pend
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x32 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x32 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x25 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x30 @ N06
	m4a_wait 0x86 @ W06
	m4a_bend 0x3A
	m4a_note_key 0xD2, 0x23 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_bend 0x40
	m4a_note_key 0xD2, 0x23 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x23 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x23 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_patt 0x088B4CBD
	m4a_note_key_vel 0xD5, 0x21, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x22 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x21 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x21 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x2D @ N24
	m4a_wait 0x83 @ W03
	m4a_bend 0x3A
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x34 @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ BEND (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ BEND (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1A @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x10 @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x05 @ BEND (running status)
	m4a_wait 0x84 @ W04
	m4a_goto 0x088B4BA9
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_ELITE_FOUR_03
SongTrack_MUS_ENCOUNTER_ELITE_FOUR_03: @ 0x088B4D6E
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x44
	m4a_pan 0x3F
	m4a_wait 0x98 @ W24
	m4a_voice 0x0D
	m4a_pan 0x20
	m4a_vol 0x40
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x5F, 0x58 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5F, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x29
	m4a_note_key_vel 0xD2, 0x5D, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5D, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x39
	m4a_note_key_vel 0xD2, 0x5B, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5B, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x54
	m4a_note_key_vel 0xD2, 0x5A, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5A, 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x58, 0x60 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x58, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x56, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x56, 0x24 @ N06
	m4a_wait 0x83 @ W03
	m4a_pan 0x5C
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x5A, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5A, 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xDB, 0x53, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x18
	m4a_pan 0x26
	m4a_vol 0x49
	m4a_mod 0x08
	m4a_note_key_vel 0xDB, 0x2F, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x30 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x13
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x08 @ MOD (running status)
	m4a_note_key 0xD8, 0x2D @ N09
	m4a_wait 0x89 @ W09
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x83 @ W03
	m4a_voice 0x18
	m4a_mod 0x00
	m4a_pan 0x60
	m4a_vol 0x3A
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x5F @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5F, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x5D
	m4a_note_key_vel 0xD2, 0x5D, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5D, 0x24 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x50
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x5B, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5B, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x30
	m4a_note_key_vel 0xD2, 0x5A, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5A, 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x58, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x56, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x56, 0x24 @ N06
	m4a_wait 0x83 @ W03
	m4a_pan 0x25
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x52, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x52, 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xDB, 0x5A, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x38
	m4a_pan 0x25
	m4a_vol 0x49
	m4a_mod 0x08
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_pan 0x25
	m4a_wait 0x83 @ W03
	m4a_voice 0x11
	m4a_vol 0x44
	m4a_note_key_vel 0xD2, 0x48, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x32
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x40
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x52
	m4a_note_key 0xD2, 0x4E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x60
	m4a_note_key 0xD2, 0x4E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x0D
	m4a_mod 0x00
	m4a_pan 0x20
	m4a_vol 0x40
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x62, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x62, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x28
	m4a_note_key_vel 0xD2, 0x60, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x60, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x38
	m4a_note_key_vel 0xD2, 0x5E, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5E, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x53
	m4a_note_key_vel 0xD2, 0x5D, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5D, 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x60 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5B, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x59, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x59, 0x24 @ N06
	m4a_wait 0x83 @ W03
	m4a_pan 0x60
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x5D, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5D, 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xDB, 0x56, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x18
	m4a_pan 0x25
	m4a_vol 0x4A
	m4a_mod 0x09
	m4a_note_key_vel 0xDB, 0x32, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x33 @ N12
	m4a_wait 0x83 @ W03
	m4a_mod 0x0F
	m4a_wait 0x89 @ W09
	m4a_voice 0x18
	m4a_vol 0x44
	m4a_pan 0x58
	m4a_mod 0x09
	m4a_note_key_vel 0xD2, 0x5D, 0x58 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5E, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5D, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x58 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x59, 0x4C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x18
	m4a_mod 0x00
	m4a_pan 0x60
	m4a_vol 0x3A
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x62, 0x5C @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x62, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x55
	m4a_note_key_vel 0xD2, 0x60, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x60, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x48
	m4a_note_key_vel 0xD2, 0x5E, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5E, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_pan 0x30
	m4a_note_key_vel 0xD2, 0x5D, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5D, 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5B, 0x24 @ N06
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x59, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x59, 0x24 @ N06
	m4a_wait 0x83 @ W03
	m4a_pan 0x25
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x55, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x55, 0x24 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xDB, 0x5D, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x38
	m4a_pan 0x25
	m4a_vol 0x4A
	m4a_mod 0x09
	m4a_note_key 0xDB, 0x32 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_voice 0x11
	m4a_vol 0x44
	m4a_pan 0x73
	m4a_note_key_vel 0xD2, 0x4B, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x5E
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x40
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x2F
	m4a_note_key 0xD2, 0x51 @ N03
	m4a_wait 0x83 @ W03
	m4a_pan 0x29
	m4a_note_key 0xD2, 0x52 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x1A
	m4a_note_key 0xD2, 0x52 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x18
	m4a_mod 0x00
	m4a_pan 0x34
	m4a_bend 0x3A
	m4a_note_key_vel 0xD2, 0x51, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x50 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4F @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x38
	m4a_pan 0x26
	m4a_mod 0x08
	m4a_vol 0x4E
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2E @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x37 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x3A @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x15
	m4a_wait 0x8C @ W12
	m4a_voice 0x26
	m4a_mod 0x0A
	m4a_pan 0x40
	m4a_vol 0x37
	m4a_note_key_vel 0xD2, 0x51, 0x5C @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x50 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x4F, 0x4C @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4F @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x00
	m4a_note_key_vel 0xD5, 0x51, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x51 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x8C @ W12
	m4a_voice 0x11
	m4a_pan 0x6C
	m4a_vol 0x3C
	m4a_note_key_vel 0xD2, 0x51, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x5B
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x33
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x18
	m4a_note_key 0xD2, 0x4B @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_goto 0x088B4D79
	m4a_pan 0x46
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_ELITE_FOUR_04
SongTrack_MUS_ENCOUNTER_ELITE_FOUR_04: @ 0x088B5054
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x7E
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x02
	m4a_vol 0x1B
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD5, 0x58, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088B5061
	m4a_patt 0x088B5061
	m4a_patt 0x088B5061
	m4a_patt 0x088B5061
	m4a_patt 0x088B5061
	m4a_patt 0x088B5061
	m4a_patt 0x088B5061
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_goto 0x088B5061
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_ELITE_FOUR_05
SongTrack_MUS_ENCOUNTER_ELITE_FOUR_05: @ 0x088B5099
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x53
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_vol 0x27
	m4a_pan 0x03
	m4a_wait 0x98 @ W24
	m4a_mod 0x02
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x36, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x37 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD8, 0x34 @ N09
	m4a_wait 0x89 @ W09
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x83 @ W03
	m4a_mod 0x02
	m4a_note_key 0xDB, 0x36 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x37 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x36, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x34 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x33 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x02
	m4a_note_key_vel 0xDB, 0x39, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x3A @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x37 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B513C
	m4a_note_key_vel 0xDB, 0x39, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4B @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x4B @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x49 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4B @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4B @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x4B @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4C @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x02 @ MOD (running status)
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4B @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x4B @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x49 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4B @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_goto 0x088B50AB
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_ELITE_FOUR_06
SongTrack_MUS_ENCOUNTER_ELITE_FOUR_06: @ 0x088B5224
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_vol 0x27
	m4a_pan 0x7F
	m4a_wait 0x98 @ W24
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x5A, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x4E @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x42 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x41 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x41 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x43 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD8, 0x40 @ N09
	m4a_wait 0x89 @ W09
	m4a_note_key 0xD2, 0x41 @ N03
	m4a_wait 0x83 @ W03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x53 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x42 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x41 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x41 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x44 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x44 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x46 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x56 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x44 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x44 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_vol 0x36
	m4a_note_key 0xD5, 0x5D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x5D, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x24 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xD5, 0x5D, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x03
	m4a_note_key_vel 0xD5, 0x5D, 0x24 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5D, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x7F
	m4a_note_key_vel 0xD5, 0x5D, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x5D, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x24 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xD5, 0x5D, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x03
	m4a_note_key_vel 0xD5, 0x5D, 0x24 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5D, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5D, 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B5347
	m4a_pan 0x7F
	m4a_note_key_vel 0xD5, 0x51, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_pan 0x03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_vol 0x27
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_goto 0x088B5236
	m4a_pan 0x7F
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_ELITE_FOUR_07
SongTrack_MUS_ENCOUNTER_ELITE_FOUR_07: @ 0x088B53B2
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_pan 0x40
	m4a_vol 0x42
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_note_key_vel 0xE7, 0x39, 0x4C @ N24
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x26 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEF, 0x39, 0x70 @ N48
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x24 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B53CC
	m4a_patt 0x088B53E2
	m4a_note_key_vel 0xEF, 0x39, 0x70 @ N48
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x24 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x70 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x70 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_patt 0x088B5401
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B5439
	m4a_patt 0x088B5439
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x28 @ N03
	m4a_note_key 0xE7, 0x39 @ N24
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD2, 0x28 @ N03
	m4a_wait 0x95 @ W21
	m4a_goto 0x088B53CC
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_ELITE_FOUR_08
SongTrack_MUS_ENCOUNTER_ELITE_FOUR_08: @ 0x088B547A
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x54
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x34
	m4a_wait 0x98 @ W24
	m4a_mod 0x08
	m4a_bend 0x3C
	m4a_note_key_vel 0xDB, 0x2F, 0x70 @ N12
	m4a_wait 0x83 @ W03
	m4a_mod 0x02
	m4a_wait 0x83 @ W03
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x30 @ N18
	m4a_wait 0x86 @ W06
	m4a_mod 0x0F
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x2F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x2E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD8, 0x2D @ N09
	m4a_wait 0x89 @ W09
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x83 @ W03
	m4a_mod 0x02
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x30 @ N24
	m4a_wait 0x86 @ W06
	m4a_mod 0x0E
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x2F, 0x58 @ N03
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x2D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x2C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x02
	m4a_note_key_vel 0xDB, 0x32, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x33 @ N24
	m4a_wait 0x83 @ W03
	m4a_mod 0x0D
	m4a_wait 0x95 @ W21
	m4a_note_key 0xD5, 0x30 @ N06
	m4a_wait 0x83 @ W03
	m4a_mod 0x03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x32 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x34 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x35 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x34 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x35 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x3C
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2E @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x37 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x35 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2E @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x37 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x3A @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x10
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x02 @ MOD (running status)
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x38 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2E @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x37 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x35 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2D @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x9C @ W36
	m4a_goto 0x088B548C
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_ELITE_FOUR_09
SongTrack_MUS_ENCOUNTER_ELITE_FOUR_09: @ 0x088B5620
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x2F
	m4a_pan 0x40
	m4a_vol 0x31
	m4a_note_key_vel 0xD5, 0x2F, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x57
	m4a_note_key 0xD5, 0x3B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_pan 0x22
	m4a_note_key_vel 0xDB, 0x2F, 0x70 @ N12
	m4a_wait 0xA4 @ W60
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x5A
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x98 @ W24
	m4a_pan 0x60
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x20
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x60
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x10
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x60
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x20
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x5F
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0xA0 @ W48
	m4a_pan 0x57
	m4a_note_key 0xD5, 0x2E @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x21
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x57
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x23
	m4a_note_key 0xDB, 0x2A @ N12
	m4a_wait 0x83 @ W03
	m4a_pan 0x21
	m4a_wait 0x89 @ W09
	m4a_running_cmd_u8 0x56 @ PAN (running status)
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x1F
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x56
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x20
	m4a_wait 0x89 @ W09
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x56
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x21
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x63
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x1F
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x57
	m4a_note_key 0xDB, 0x32 @ N12
	m4a_wait 0x9C @ W36
	m4a_pan 0x1C
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x56 @ PAN (running status)
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x1B
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x56
	m4a_note_key 0xD5, 0x3E @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x1C
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_pan 0x5A
	m4a_note_key 0xDB, 0x32 @ N12
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x1D
	m4a_note_key 0xD5, 0x33 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x32 @ N12
	m4a_wait 0xA0 @ W48
	m4a_pan 0x59
	m4a_note_key 0xD5, 0x3E @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x1D
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x57
	m4a_note_key 0xD5, 0x3E @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x1D
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x14
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x39, 0x34 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x39, 0x54 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x39, 0x60 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x39, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x39, 0x7F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x39, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x20
	m4a_note_key_vel 0xD5, 0x39, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x67
	m4a_note_key 0xD5, 0x32 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x20
	m4a_note_key 0xD5, 0x38 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x67
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x20
	m4a_note_key 0xD5, 0x37 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x67
	m4a_note_key 0xD5, 0x30 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x10
	m4a_note_key 0xE7, 0x3A @ N24
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088B571F
	m4a_note_key_vel 0xD5, 0x39, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x31 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x3A @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x70
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x61
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x11
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x60
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_pan 0x11
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x60
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x15
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pan 0x63
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x98 @ W24
	m4a_goto 0x088B5638
	m4a_fine
	m4a_running_note_key 0x00 @ N06 (running status)
	.globl SongHeader_MUS_ENCOUNTER_ELITE_FOUR
SongHeader_MUS_ENCOUNTER_ELITE_FOUR: @ 0x088B57A0
	@ M4A song header: song 450 (MUS_ENCOUNTER_ELITE_FOUR)
	m4a_song_header 9, 0, 0, 0xB2, VoiceGroup_JP_0861A99C
	.4byte SongTrack_MUS_ENCOUNTER_ELITE_FOUR_01
	.4byte SongTrack_MUS_ENCOUNTER_ELITE_FOUR_02
	.4byte SongTrack_MUS_ENCOUNTER_ELITE_FOUR_03
	.4byte SongTrack_MUS_ENCOUNTER_ELITE_FOUR_04
	.4byte SongTrack_MUS_ENCOUNTER_ELITE_FOUR_05
	.4byte SongTrack_MUS_ENCOUNTER_ELITE_FOUR_06
	.4byte SongTrack_MUS_ENCOUNTER_ELITE_FOUR_07
	.4byte SongTrack_MUS_ENCOUNTER_ELITE_FOUR_08
	.4byte SongTrack_MUS_ENCOUNTER_ELITE_FOUR_09

	.globl SongTrack_MUS_ENCOUNTER_HIKER_01
SongTrack_MUS_ENCOUNTER_HIKER_01: @ 0x088B57CC
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x40
	m4a_voice 0x01
	m4a_lfos 0x2C
	m4a_pan 0x44
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x26
	m4a_note_key_vel 0xD3, 0x5A, 0x70 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEF, 0x51 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xDF, 0x4F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x88 @ W08
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_goto 0x088B57ED
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_HIKER_02
SongTrack_MUS_ENCOUNTER_HIKER_02: @ 0x088B57FB
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x3C
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x3E
	m4a_note_key_vel 0xD3, 0x4E, 0x70 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEF, 0x45 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDF, 0x43 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x4A, 0x60 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x45 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_vol 0x3A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x3F
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x41 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x45 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x44 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xE7, 0x42 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xF7, 0x43 @ N72
	m4a_wait 0x98 @ W24
	m4a_vol 0x3E
	m4a_mod 0x08
	m4a_wait 0x88 @ W08
	m4a_vol 0x3C
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3F @ VOL (running status)
	m4a_mod 0x00
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x4C @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x4B @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x47 @ N48
	m4a_wait 0x98 @ W24
	m4a_vol 0x3E
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3F @ VOL (running status)
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x48 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xEA, 0x53, 0x48 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key_vel 0xD7, 0x52, 0x44 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x45, 0x60 @ N08
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x44 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x47 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4A @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xF7, 0x4E @ N72
	m4a_wait 0x98 @ W24
	m4a_vol 0x3E
	m4a_mod 0x05
	m4a_wait 0x84 @ W04
	m4a_vol 0x3C
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3F @ VOL (running status)
	m4a_mod 0x00
	m4a_wait 0x98 @ W24
	m4a_goto 0x088B581C
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_HIKER_03
SongTrack_MUS_ENCOUNTER_HIKER_03: @ 0x088B58F8
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x3A
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_pan 0x40
	m4a_vol 0x4C
	m4a_note_key_vel 0xD3, 0x2D, 0x70 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEF, 0x21 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDF, 0x25 @ N16
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x21 @ N08 (running status)
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xD7, 0x26, 0x70 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x21 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x26 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x25, 0x48 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x24 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x23 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x22 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xE7, 0x21, 0x70 @ N24
	m4a_wait 0x90 @ W16
	m4a_bend 0x54
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD7, 0x26 @ N08
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x21 @ N08 (running status)
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xD7, 0x28, 0x70 @ N08
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x23 @ N08 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x28 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x27, 0x48 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x26 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x25 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x24 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xE7, 0x23, 0x70 @ N24
	m4a_wait 0x90 @ W16
	m4a_bend 0x54
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD7, 0x28 @ N08
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x23 @ N08 (running status)
	m4a_wait 0xA0 @ W48
	m4a_patt 0x088B5940
	m4a_bend 0x40
	m4a_note_key_vel 0xD7, 0x21, 0x70 @ N08
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x1C @ N08 (running status)
	m4a_wait 0xA0 @ W48
	m4a_patt 0x088B5920
	m4a_goto 0x088B591A
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_HIKER_04
SongTrack_MUS_ENCOUNTER_HIKER_04: @ 0x088B5978
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x2F
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x4C
	m4a_pan 0x60
	m4a_note_key_vel 0xD3, 0x39, 0x7C @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x40
	m4a_note_key_vel 0xD3, 0x32, 0x78 @ N04
	m4a_wait 0x84 @ W04
	m4a_pan 0x20
	m4a_note_key_vel 0xD7, 0x2D, 0x7F @ N08
	m4a_wait 0x98 @ W24
	m4a_pan 0x56
	m4a_note_key_vel 0xD7, 0x39, 0x7C @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD3, 0x39, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_pan 0x1F
	m4a_note_key_vel 0xD7, 0x2D, 0x7F @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD3, 0x2D, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_pan 0x56
	m4a_bend 0x40
	m4a_note_key_vel 0xD7, 0x32, 0x7F @ N08
	m4a_wait 0xA0 @ W48
	m4a_pan 0x1F
	m4a_note_key_vel 0xD7, 0x2D, 0x70 @ N08
	m4a_wait 0xA0 @ W48
	m4a_pan 0x58
	m4a_bend 0x40
	m4a_note_key_vel 0xD7, 0x32, 0x7F @ N08
	m4a_wait 0x98 @ W24
	m4a_pan 0x20
	m4a_note_key_vel 0xD7, 0x2D, 0x70 @ N08
	m4a_wait 0x98 @ W24
	m4a_pan 0x58
	m4a_note_key 0xD7, 0x32 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD3, 0x32, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_pan 0x1F
	m4a_note_key_vel 0xE7, 0x2D, 0x78 @ N24
	m4a_wait 0x90 @ W16
	m4a_bend 0x54
	m4a_wait 0x88 @ W08
	m4a_pan 0x55
	m4a_bend 0x40
	m4a_note_key_vel 0xD7, 0x32, 0x7F @ N08
	m4a_wait 0xA0 @ W48
	m4a_pan 0x1F
	m4a_note_key_vel 0xD7, 0x2D, 0x70 @ N08
	m4a_wait 0xA0 @ W48
	m4a_pan 0x58
	m4a_bend 0x40
	m4a_note_key_vel 0xD7, 0x34, 0x7F @ N08
	m4a_wait 0x98 @ W24
	m4a_pan 0x20
	m4a_note_key_vel 0xD7, 0x2F, 0x70 @ N08
	m4a_wait 0x98 @ W24
	m4a_pan 0x58
	m4a_note_key 0xD7, 0x34 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD3, 0x34, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_pan 0x1F
	m4a_note_key_vel 0xE7, 0x2F, 0x78 @ N24
	m4a_wait 0x90 @ W16
	m4a_bend 0x54
	m4a_wait 0x88 @ W08
	m4a_pan 0x59
	m4a_bend 0x40
	m4a_note_key_vel 0xD7, 0x34, 0x7F @ N08
	m4a_wait 0xA0 @ W48
	m4a_pan 0x20
	m4a_note_key_vel 0xD7, 0x2F, 0x70 @ N08
	m4a_wait 0xA0 @ W48
	m4a_pan 0x58
	m4a_bend 0x40
	m4a_note_key_vel 0xD7, 0x34, 0x7F @ N08
	m4a_wait 0x98 @ W24
	m4a_pan 0x20
	m4a_note_key_vel 0xD7, 0x2F, 0x70 @ N08
	m4a_wait 0x98 @ W24
	m4a_pan 0x5C
	m4a_note_key 0xD7, 0x34 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD3, 0x34, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_pan 0x1F
	m4a_note_key_vel 0xE7, 0x2F, 0x78 @ N24
	m4a_wait 0x90 @ W16
	m4a_bend 0x54
	m4a_wait 0x88 @ W08
	m4a_pan 0x58
	m4a_bend 0x40
	m4a_note_key_vel 0xD7, 0x2D, 0x7F @ N08
	m4a_wait 0xA0 @ W48
	m4a_pan 0x1F
	m4a_note_key_vel 0xD7, 0x28, 0x70 @ N08
	m4a_wait 0xA0 @ W48
	m4a_pan 0x58
	m4a_bend 0x40
	m4a_note_key_vel 0xD7, 0x32, 0x7F @ N08
	m4a_wait 0x98 @ W24
	m4a_pan 0x20
	m4a_note_key_vel 0xD7, 0x2D, 0x70 @ N08
	m4a_wait 0x98 @ W24
	m4a_pan 0x58
	m4a_note_key 0xD7, 0x32 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD3, 0x32, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_pan 0x20
	m4a_note_key_vel 0xE7, 0x2D, 0x78 @ N24
	m4a_wait 0x90 @ W16
	m4a_bend 0x54
	m4a_wait 0x88 @ W08
	m4a_goto 0x088B59AA
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_HIKER_05
SongTrack_MUS_ENCOUNTER_HIKER_05: @ 0x088B5A68
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x00
	m4a_vol 0x23
	m4a_note_key_vel 0xD3, 0x39, 0x70 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x36 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x32 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEF, 0x2D @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDF, 0x31 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDB, 0x42, 0x70 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x42, 0x58 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x45, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note 0xD3 @ N04
	m4a_wait 0x8C @ W12
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x41 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x42 @ N02
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B5A90
	m4a_note_key_vel 0xD3, 0x43, 0x70 @ N04
	m4a_wait 0x8C @ W12
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x47 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x43 @ N02
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x43, 0x58 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x43, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B5AC6
	m4a_note_key_vel 0xDB, 0x40, 0x70 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x40, 0x58 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x45, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3E @ N04
	m4a_wait 0x8C @ W12
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3D @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x3E @ N02
	m4a_wait 0x88 @ W08
	m4a_goto 0x088B5A90
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_HIKER_06
SongTrack_MUS_ENCOUNTER_HIKER_06: @ 0x088B5B33
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x25
	m4a_note_key_vel 0xD3, 0x3E, 0x70 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x39 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x37 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEF, 0x3E @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDF, 0x3D @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x45, 0x58 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x4A, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note 0xD3 @ N04
	m4a_wait 0x8C @ W12
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4A @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x44 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x45 @ N02
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B5B5B
	m4a_note_key_vel 0xD3, 0x47, 0x70 @ N04
	m4a_wait 0x8C @ W12
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4C @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x46 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x47 @ N02
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x47, 0x58 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x47, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_patt 0x088B5B91
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x45, 0x58 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x49, 0x70 @ N02 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N02 (running status)
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x8C @ W12
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x90 @ W16
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note 0xD1 @ N02
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x44 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD1, 0x45 @ N02
	m4a_wait 0x88 @ W08
	m4a_goto 0x088B5B5B
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_HIKER_07
SongTrack_MUS_ENCOUNTER_HIKER_07: @ 0x088B5BFD
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_pan 0x40
	m4a_vol 0x38
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD3, 0x28, 0x70 @ N04
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x28, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x28, 0x34 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x28, 0x70 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x3C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x28, 0x34 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_pend
	m4a_note_key_vel 0xD3, 0x28, 0x70 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x3C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x70 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x28, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x70 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x28, 0x54 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x28, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x28, 0x34 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_pend
	m4a_patt 0x088B5C06
	m4a_patt 0x088B5C33
	m4a_patt 0x088B5C06
	m4a_patt 0x088B5C33
	m4a_patt 0x088B5C06
	m4a_patt 0x088B5C33
	m4a_goto 0x088B5C06
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_HIKER_08
SongTrack_MUS_ENCOUNTER_HIKER_08: @ 0x088B5C7C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x16
	m4a_wait 0xA0 @ W48
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x98 @ W24
	m4a_bend 0x41
	m4a_note_key_vel 0xD7, 0x4A, 0x70 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x45 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x41 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x42 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDF, 0x45 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xD3, 0x44, 0x50 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x43 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xE7, 0x42, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xF7, 0x43 @ N72
	m4a_wait 0x98 @ W24
	m4a_mod 0x08
	m4a_wait 0xA0 @ W48
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD7, 0x4C @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x4B @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x47 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x48 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xEA, 0x53, 0x44 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key_vel 0xD7, 0x52, 0x4C @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x51 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD7, 0x45, 0x70 @ N08
	m4a_wait 0x90 @ W16
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x44 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x45 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x47 @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x49 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x4A @ N08
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD3, 0x4C @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xF7, 0x4E @ N72
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_wait 0xA0 @ W48
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x98 @ W24
	m4a_goto 0x088B5C93
	m4a_fine
	.globl SongHeader_MUS_ENCOUNTER_HIKER
SongHeader_MUS_ENCOUNTER_HIKER: @ 0x088B5D24
	@ M4A song header: song 451 (MUS_ENCOUNTER_HIKER)
	m4a_song_header 8, 0, 0, 0xB2, VoiceGroup_JP_0861AF9C
	.4byte SongTrack_MUS_ENCOUNTER_HIKER_01
	.4byte SongTrack_MUS_ENCOUNTER_HIKER_02
	.4byte SongTrack_MUS_ENCOUNTER_HIKER_03
	.4byte SongTrack_MUS_ENCOUNTER_HIKER_04
	.4byte SongTrack_MUS_ENCOUNTER_HIKER_05
	.4byte SongTrack_MUS_ENCOUNTER_HIKER_06
	.4byte SongTrack_MUS_ENCOUNTER_HIKER_07
	.4byte SongTrack_MUS_ENCOUNTER_HIKER_08

	.globl SongTrack_MUS_CONTEST_LOBBY_01
SongTrack_MUS_CONTEST_LOBBY_01: @ 0x088B5D4C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x40
	m4a_voice 0x38
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x24
	m4a_wait 0xB0 @ W96
	m4a_wait 0xAC @ W84
	m4a_note_key_vel 0xDB, 0x3F, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x40, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xE1 @ N18
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x43 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xED, 0x4A @ N42
	m4a_wait 0xA0 @ W48
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x46 @ N18
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD5, 0x4D @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFB, 0x4C @ N84
	m4a_wait 0xAC @ W84
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xE4 @ N21
	m4a_wait 0x98 @ W24
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x4D @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xDB, 0x4A @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3F @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x40, 0x54 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x40, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x41 @ N06
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x43 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x48 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4A @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x49 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x46 @ N18
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD5, 0x4D @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4F @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE9, 0x4C @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key_vel 0xD2, 0x4B, 0x3C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x48, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE4 @ N21
	m4a_wait 0x98 @ W24
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x4A @ N18
	m4a_wait 0x98 @ W24
	m4a_note 0xE1 @ N18
	m4a_wait 0x98 @ W24
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xAC @ W84
	m4a_note_key 0xDB, 0x3F @ N12
	m4a_wait 0x8C @ W12
	m4a_goto 0x088B5D60
	m4a_fine
	.globl SongTrack_MUS_CONTEST_LOBBY_02
SongTrack_MUS_CONTEST_LOBBY_02: @ 0x088B5DF6
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x3A
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_pan 0x40
	m4a_vol 0x3C
	m4a_wait 0xB0 @ W96
	m4a_wait 0xAC @ W84
	m4a_note_key_vel 0xDB, 0x2F, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x30, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD5, 0x2E, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD5, 0x2D, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD5, 0x2C, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x27 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B5E0C
	m4a_patt 0x088B5E17
	m4a_patt 0x088B5E22
	m4a_patt 0x088B5E2D
	m4a_patt 0x088B5E0C
	m4a_patt 0x088B5E17
	m4a_patt 0x088B5E22
	m4a_patt 0x088B5E2D
	m4a_patt 0x088B5E0C
	m4a_patt 0x088B5E17
	m4a_patt 0x088B5E22
	m4a_patt 0x088B5E2D
	m4a_goto 0x088B5E0C
	m4a_fine
	.globl SongTrack_MUS_CONTEST_LOBBY_03
SongTrack_MUS_CONTEST_LOBBY_03: @ 0x088B5E7D
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x49
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x21
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xAE @ W90
	m4a_note_key_vel 0xD2, 0x4C, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xEF, 0x4F @ N48
	m4a_wait 0xA4 @ W60
	m4a_note_key 0xD5, 0x51 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x4C @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEF, 0x48 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4B @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x4C, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x48 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x44 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x43, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x42 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x42 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x51 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B5EED
	m4a_note_key_vel 0xD5, 0x4C, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x47 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x47 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x43 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x41 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x43 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x41 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x38 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x54 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x50 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B5E8B
	m4a_fine
	.globl SongTrack_MUS_CONTEST_LOBBY_04
SongTrack_MUS_CONTEST_LOBBY_04: @ 0x088B5F87
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x03
	m4a_vol 0x23
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD5, 0x3C, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x43 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x40, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x8F @ W15
	m4a_running_note_key_vel 0x43, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x3C @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x43 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key_vel 0xD5, 0x3A, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x41 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x40, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x8F @ W15
	m4a_running_note_key_vel 0x41, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x3A @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x41 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key_vel 0xD5, 0x39, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x3E, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x8F @ W15
	m4a_running_note_key_vel 0x40, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x98 @ W24
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key_vel 0xD5, 0x38, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x3F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x3E, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3A @ N03 (running status)
	m4a_wait 0x8F @ W15
	m4a_running_note_key_vel 0x44, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x3A @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x41 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B5F9A
	m4a_patt 0x088B5FB6
	m4a_patt 0x088B5FD2
	m4a_patt 0x088B5FEC
	m4a_patt 0x088B5F9A
	m4a_patt 0x088B5FB6
	m4a_patt 0x088B5FD2
	m4a_patt 0x088B5FEC
	m4a_patt 0x088B5F9A
	m4a_patt 0x088B5FB6
	m4a_note_key_vel 0xD5, 0x39, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x3E, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x8F @ W15
	m4a_running_note_key_vel 0x40, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B5FEC
	m4a_goto 0x088B5F9A
	m4a_fine
	.globl SongTrack_MUS_CONTEST_LOBBY_05
SongTrack_MUS_CONTEST_LOBBY_05: @ 0x088B6068
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x21
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD5, 0x37, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x45, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x8F @ W15
	m4a_running_note_key_vel 0x48, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x37 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key_vel 0xD5, 0x35, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x45, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x8F @ W15
	m4a_running_note_key_vel 0x46, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x35 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key_vel 0xD5, 0x34, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x43, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x8F @ W15
	m4a_running_note_key_vel 0x45, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x34 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x98 @ W24
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key_vel 0xD5, 0x33, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x43, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x8F @ W15
	m4a_running_note_key_vel 0x48, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x35 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B607B
	m4a_patt 0x088B6097
	m4a_patt 0x088B60B3
	m4a_patt 0x088B60CD
	m4a_patt 0x088B607B
	m4a_patt 0x088B6097
	m4a_patt 0x088B60B3
	m4a_patt 0x088B60CD
	m4a_patt 0x088B607B
	m4a_patt 0x088B6097
	m4a_note_key_vel 0xD5, 0x34, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x43, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x8F @ W15
	m4a_running_note_key_vel 0x45, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x34 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B60CD
	m4a_goto 0x088B607B
	m4a_fine
	.globl SongTrack_MUS_CONTEST_LOBBY_06
SongTrack_MUS_CONTEST_LOBBY_06: @ 0x088B6149
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_pan 0x40
	m4a_vol 0x34
	m4a_note_key_vel 0xD2, 0x28, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x64 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x54 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x20 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x20 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x64 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x2C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x20 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x28, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x64 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x54 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x20 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_pend
	m4a_note_key_vel 0xD2, 0x28, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x60 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x20 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x20 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_pend
	m4a_patt 0x088B61AC
	m4a_patt 0x088B61D8
	m4a_patt 0x088B61AC
	m4a_note_key_vel 0xD2, 0x28, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x60 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x20 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x2C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x28, 0x20 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_pend
	m4a_patt 0x088B61AC
	m4a_patt 0x088B6215
	m4a_patt 0x088B61AC
	m4a_patt 0x088B61D8
	m4a_patt 0x088B61AC
	m4a_patt 0x088B6215
	m4a_patt 0x088B61AC
	m4a_patt 0x088B6215
	m4a_patt 0x088B61AC
	m4a_patt 0x088B6215
	m4a_goto 0x088B61AC
	m4a_fine
	.globl SongTrack_MUS_CONTEST_LOBBY_07
SongTrack_MUS_CONTEST_LOBBY_07: @ 0x088B627C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_vol 0x2D
	m4a_pan 0x35
	m4a_bend 0x41
	m4a_wait 0xB0 @ W96
	m4a_wait 0xAC @ W84
	m4a_note_key_vel 0xDB, 0x2F, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x30, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD5, 0x2E, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD5, 0x2D, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD5, 0x2C, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x27 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B6295
	m4a_patt 0x088B62A0
	m4a_patt 0x088B62AB
	m4a_patt 0x088B62B6
	m4a_patt 0x088B6295
	m4a_patt 0x088B62A0
	m4a_patt 0x088B62AB
	m4a_patt 0x088B62B6
	m4a_patt 0x088B6295
	m4a_patt 0x088B62A0
	m4a_patt 0x088B62AB
	m4a_patt 0x088B62B6
	m4a_goto 0x088B6295
	m4a_fine
	.globl SongTrack_MUS_CONTEST_LOBBY_08
SongTrack_MUS_CONTEST_LOBBY_08: @ 0x088B6306
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x38
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x32
	m4a_vol 0x1C
	m4a_wait 0xB0 @ W96
	m4a_wait 0xAC @ W84
	m4a_note_key_vel 0xDB, 0x36, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x37, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xE1 @ N18
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x3C @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x40 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xED, 0x41 @ N42
	m4a_wait 0xA0 @ W48
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x3E @ N18
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFB, 0x48 @ N84
	m4a_wait 0xAC @ W84
	m4a_note_key 0xD2, 0x3F @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xE4 @ N21
	m4a_wait 0x98 @ W24
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x44 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x43, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xDB, 0x41, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x35 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x37, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x37, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x3C @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x40 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x41 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x3E @ N18
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4C @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE9, 0x48 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key_vel 0xD2, 0x47, 0x3C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x3F, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE4 @ N21
	m4a_wait 0x98 @ W24
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x41 @ N18
	m4a_wait 0x98 @ W24
	m4a_note 0xE1 @ N18
	m4a_wait 0x98 @ W24
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_goto 0x088B6318
	m4a_fine
	.globl SongHeader_MUS_CONTEST_LOBBY
SongHeader_MUS_CONTEST_LOBBY: @ 0x088B63AC
	@ M4A song header: song 452 (MUS_CONTEST_LOBBY)
	m4a_song_header 8, 0, 0, 0xB2, VoiceGroup_JP_0861B59C
	.4byte SongTrack_MUS_CONTEST_LOBBY_01
	.4byte SongTrack_MUS_CONTEST_LOBBY_02
	.4byte SongTrack_MUS_CONTEST_LOBBY_03
	.4byte SongTrack_MUS_CONTEST_LOBBY_04
	.4byte SongTrack_MUS_CONTEST_LOBBY_05
	.4byte SongTrack_MUS_CONTEST_LOBBY_06
	.4byte SongTrack_MUS_CONTEST_LOBBY_07
	.4byte SongTrack_MUS_CONTEST_LOBBY_08

	.globl SongTrack_MUS_ENCOUNTER_INTERVIEWER_01
SongTrack_MUS_ENCOUNTER_INTERVIEWER_01: @ 0x088B63D4
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x47
	m4a_voice 0x7F
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x27
	m4a_pan 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x5B, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x74 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x3C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x5B, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x40 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x44 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5B, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B6414
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_INTERVIEWER_02
SongTrack_MUS_ENCOUNTER_INTERVIEWER_02: @ 0x088B64CC
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x38
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x4D
	m4a_vol 0x3E
	m4a_note_key_vel 0xD2, 0x4B, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE1, 0x47 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x50 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x51 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEB, 0x4E @ N36
	m4a_wait 0x9C @ W36
	m4a_voice 0x0D
	m4a_vol 0x1B
	m4a_note_key_vel 0xD2, 0x5F, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x5F, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5F, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x5F, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x5F, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5F, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5F, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5F, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x5F, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x5F, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5F, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x5F, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x5F, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5F, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5F, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5F, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B6525
	m4a_patt 0x088B6525
	m4a_goto 0x088B64F9
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_INTERVIEWER_03
SongTrack_MUS_ENCOUNTER_INTERVIEWER_03: @ 0x088B655F
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x24
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_pan 0x40
	m4a_vol 0x3D
	m4a_wait 0x86 @ W06
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_bend 0x40
	m4a_note_key_vel 0xE1, 0x23, 0x70 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x2F @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2F @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3B
	m4a_note_key 0xE7, 0x23 @ N24
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x9A @ W30
	m4a_note_key 0xD5, 0x21 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x22 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDE, 0x23, 0x70 @ N15
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x21 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x22 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDE, 0x23 @ N15
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x21 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x22 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_note_key 0xE1, 0x23 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x2F @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x23 @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x21 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x22 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B6590
	m4a_goto 0x088B6572
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_INTERVIEWER_04
SongTrack_MUS_ENCOUNTER_INTERVIEWER_04: @ 0x088B65C4
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x38
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x3C
	m4a_pan 0x28
	m4a_note_key_vel 0xD2, 0x44, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE1, 0x40 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x47 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEB, 0x4A @ N36
	m4a_wait 0x9C @ W36
	m4a_voice 0x0D
	m4a_vol 0x1B
	m4a_note_key_vel 0xD2, 0x58, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x58, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x58, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x58, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x58, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x58, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x58, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x58, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B661D
	m4a_patt 0x088B661D
	m4a_goto 0x088B65F1
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_INTERVIEWER_05
SongTrack_MUS_ENCOUNTER_INTERVIEWER_05: @ 0x088B6657
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x7E
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x2F
	m4a_pan 0x40
	m4a_wait 0x86 @ W06
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xAC @ W84
	m4a_note_key_vel 0xDB, 0x58, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0xAC @ W84
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0xA4 @ W60
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x9C @ W36
	m4a_note 0xDB @ N12
	m4a_wait 0x9C @ W36
	m4a_goto 0x088B6666
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_INTERVIEWER_06
SongTrack_MUS_ENCOUNTER_INTERVIEWER_06: @ 0x088B667F
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_vol 0x25
	m4a_pan 0x03
	m4a_note_key_vel 0xD2, 0x53, 0x6C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x64 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x64 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x62 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x62 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x61 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x61 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x64 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x61 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x66 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x53
	m4a_vol 0x25
	m4a_note_key_vel 0xFB, 0x3B, 0x70 @ N84
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_vol 0x2C
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x04 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_vol 0x25
	m4a_note_key 0xD5, 0x36 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFF, 0x36 @ N96
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_vol 0x2C
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x04 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x02 @ VOL (running status)
	m4a_wait 0x8D @ W13
	m4a_mod 0x00
	m4a_vol 0x25
	m4a_note_key 0xFB, 0x3B @ N84
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_vol 0x2C
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x06 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x04 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_mod 0x00
	m4a_vol 0x25
	m4a_note_key 0xD5, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFF, 0x42 @ N96
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_vol 0x2C
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x07 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x04 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B66D6
	m4a_mod 0x00
	m4a_vol 0x25
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_INTERVIEWER_07
SongTrack_MUS_ENCOUNTER_INTERVIEWER_07: @ 0x088B675C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x51
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_vol 0x25
	m4a_pan 0x7F
	m4a_note_key_vel 0xD2, 0x50, 0x6C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x61 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x54
	m4a_vol 0x25
	m4a_note_key_vel 0xFB, 0x42, 0x70 @ N84
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_vol 0x2C
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x04 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_vol 0x25
	m4a_note_key 0xD5, 0x3F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x42 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFF, 0x3B @ N96
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_vol 0x2C
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x04 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x02 @ VOL (running status)
	m4a_wait 0x8D @ W13
	m4a_mod 0x00
	m4a_vol 0x25
	m4a_note_key 0xFB, 0x42 @ N84
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_vol 0x2C
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x06 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x04 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_mod 0x00
	m4a_vol 0x25
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFF, 0x47 @ N96
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_vol 0x2C
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x07 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x04 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B67B3
	m4a_mod 0x00
	m4a_vol 0x25
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_INTERVIEWER_08
SongTrack_MUS_ENCOUNTER_INTERVIEWER_08: @ 0x088B6839
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_pan 0x40
	m4a_vol 0x3A
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_note_key_vel 0xE7, 0x39, 0x50 @ N24
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_note_key_vel 0xE7, 0x39, 0x44 @ N24
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_note_key_vel 0xEB, 0x39, 0x4C @ N36
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x26, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x26, 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x26, 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x26, 0x70 @ N06 (running status)
	m4a_note_key_vel 0xE7, 0x39, 0x48 @ N24
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x26, 0x74 @ N06 (running status)
	m4a_note_key_vel 0xE7, 0x39, 0x48 @ N24
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_note_key_vel 0xEB, 0x39, 0x48 @ N36
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x26, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x26, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x26, 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x26, 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEF, 0x39, 0x5C @ N48
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_goto 0x088B688F
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_INTERVIEWER_09
SongTrack_MUS_ENCOUNTER_INTERVIEWER_09: @ 0x088B689D
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x3C
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x34 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x27 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x26 @ N12
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x32 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x26 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x25 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x25 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x24 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x30 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x32 @ N12
	m4a_wait 0x8C @ W12
	m4a_vol 0x1B
	m4a_bend 0x41
	m4a_note_key_vel 0xE1, 0x2F, 0x70 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x3B @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x3B @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x2F @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDE, 0x2F, 0x70 @ N15
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDE, 0x2F @ N15
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_note_key 0xE1, 0x2F @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x3B @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x2F @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B68FB
	m4a_goto 0x088B68E0
	m4a_wait 0xB0 @ W96
	m4a_fine
	m4a_running_note_key 0x00 @ N06 (running status)
	.globl SongHeader_MUS_ENCOUNTER_INTERVIEWER
SongHeader_MUS_ENCOUNTER_INTERVIEWER: @ 0x088B6930
	@ M4A song header: song 453 (MUS_ENCOUNTER_INTERVIEWER)
	m4a_song_header 9, 0, 0, 0xB2, VoiceGroup_JP_0861BB9C
	.4byte SongTrack_MUS_ENCOUNTER_INTERVIEWER_01
	.4byte SongTrack_MUS_ENCOUNTER_INTERVIEWER_02
	.4byte SongTrack_MUS_ENCOUNTER_INTERVIEWER_03
	.4byte SongTrack_MUS_ENCOUNTER_INTERVIEWER_04
	.4byte SongTrack_MUS_ENCOUNTER_INTERVIEWER_05
	.4byte SongTrack_MUS_ENCOUNTER_INTERVIEWER_06
	.4byte SongTrack_MUS_ENCOUNTER_INTERVIEWER_07
	.4byte SongTrack_MUS_ENCOUNTER_INTERVIEWER_08
	.4byte SongTrack_MUS_ENCOUNTER_INTERVIEWER_09

	.globl SongTrack_MUS_ENCOUNTER_CHAMPION_01
SongTrack_MUS_ENCOUNTER_CHAMPION_01: @ 0x088B695C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x47
	m4a_voice 0x7F
	m4a_lfos 0x2C
	m4a_pan 0x44
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x2C
	m4a_note_key_vel 0xD2, 0x5A, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x5A, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x5A, 0x40 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_note_key_vel 0xD2, 0x5A, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x50 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B69DF
	m4a_patt 0x088B69B7
	m4a_patt 0x088B69DF
	m4a_patt 0x088B69FF
	m4a_patt 0x088B69FF
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x5A, 0x50 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x98 @ W24
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x98 @ W24
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B6A3E
	m4a_patt 0x088B6A3E
	m4a_patt 0x088B6A3E
	m4a_note_key_vel 0xD2, 0x5A, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x58 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x5A, 0x58 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x70 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x40 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B6A5E
	m4a_patt 0x088B6A5E
	m4a_patt 0x088B6A5E
	m4a_goto 0x088B69B7
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_CHAMPION_02
SongTrack_MUS_ENCOUNTER_CHAMPION_02: @ 0x088B6A93
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x11
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x3F
	m4a_pan 0x50
	m4a_note_key_vel 0xD5, 0x54, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4B @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x57 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x56 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x60
	m4a_wait 0x86 @ W06
	m4a_wait 0xB0 @ W96
	m4a_voice 0x11
	m4a_pan 0x60
	m4a_mod 0x00
	m4a_bend 0x40
	m4a_note_key_vel 0xD2, 0x49, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x11
	m4a_note_key 0xD5, 0x51 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x54 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x50 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x57 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x9A @ W30
	m4a_voice 0x26
	m4a_mod 0x08
	m4a_pan 0x58
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x28 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x11
	m4a_vol 0x3F
	m4a_mod 0x00
	m4a_pan 0x60
	m4a_note_key 0xD2, 0x49 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x11
	m4a_note_key 0xD5, 0x51 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x54 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x57 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x9A @ W30
	m4a_voice 0x26
	m4a_mod 0x06
	m4a_pan 0x59
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x28 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x38
	m4a_mod 0x00
	m4a_pan 0x60
	m4a_note_key 0xD2, 0x47 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x38
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x52 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x4E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x55 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x56 @ N06
	m4a_wait 0x9A @ W30
	m4a_voice 0x26
	m4a_mod 0x08
	m4a_pan 0x59
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2B @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2B @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x26 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x38
	m4a_vol 0x3F
	m4a_mod 0x00
	m4a_pan 0x60
	m4a_note_key 0xD2, 0x47 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x49 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x38
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x52 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x55 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x56 @ N06
	m4a_wait 0x9A @ W30
	m4a_voice 0x38
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD5, 0x5B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x56 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x56 @ N03
	m4a_wait 0x86 @ W06
	m4a_voice 0x18
	m4a_vol 0x2F
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF5, 0x58 @ N66
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_vol 0x2E
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2F
	m4a_note_key_vel 0xD5, 0x58, 0x58 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x59 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x59 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_vol 0x2F
	m4a_note_key 0xEB, 0x56 @ N36
	m4a_wait 0x82 @ W02
	m4a_vol 0x29
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_mod 0x06
	m4a_wait 0x82 @ W02
	m4a_vol 0x20
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x00
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x18
	m4a_note_key 0xE9, 0x56 @ N30
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE9, 0x58 @ N30
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEF, 0x58 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_vol 0x2F
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_mod 0x00
	m4a_vol 0x2F
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note 0xE1 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x59 @ N06
	m4a_wait 0x92 @ W18
	m4a_note_key 0xEF, 0x56 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_vol 0x2F
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2F
	m4a_note_key 0xD2, 0x51 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x58 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x59 @ N06
	m4a_wait 0x92 @ W18
	m4a_note_key 0xEF, 0x56 @ N48
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_vol 0x2F
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x8A @ W10
	m4a_mod 0x00
	m4a_vol 0x2F
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_tie_key 0x5B @ TIE
	m4a_wait 0x86 @ W06
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_vol 0x2E
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x27 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x9A @ W30
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x99 @ W28
	m4a_eot
	m4a_goto 0x088B6ABC
	m4a_mod 0x00
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_CHAMPION_03
SongTrack_MUS_ENCOUNTER_CHAMPION_03: @ 0x088B6D3A
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x24
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_vol 0x4C
	m4a_pan 0x40
	m4a_bend 0x40
	m4a_note_key_vel 0xD5, 0x21, 0x7F @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x24 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x21 @ N18
	m4a_wait 0x92 @ W18
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_bend 0x40
	m4a_note_key 0xDB, 0x37 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x33 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x45
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2B @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x45
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x3A @ BEND (running status)
	m4a_note_key 0xDB, 0x28 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3B
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3B
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key_vel 0xE1, 0x21, 0x7F @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x28 @ N06
	m4a_wait 0x92 @ W18
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x45
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x7F @ BEND (running status)
	m4a_note_key 0xE1, 0x21 @ N18
	m4a_wait 0x86 @ W06
	m4a_bend 0x41
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x28 @ N06
	m4a_wait 0x92 @ W18
	m4a_note_key 0xDB, 0x32 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x36
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2B @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD2, 0x21 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2B @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x27 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x23 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B6D9C
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x2B, 0x7F @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD2, 0x21 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x26 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2B @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x26 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key_vel 0xE1, 0x1F, 0x7F @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x92 @ W18
	m4a_note_key 0xDB, 0x2D @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x45
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x7F @ BEND (running status)
	m4a_note_key 0xE1, 0x1F @ N18
	m4a_wait 0x86 @ W06
	m4a_bend 0x41
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x26 @ N06
	m4a_wait 0x92 @ W18
	m4a_note_key 0xDB, 0x30 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x36
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD2, 0x1F @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x25 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x21 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B6E25
	m4a_bend 0x40
	m4a_note_key_vel 0xDE, 0x1F, 0x7F @ N15
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x2A @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x41 @ BEND (running status)
	m4a_note_key 0xDB, 0x1F @ N12
	m4a_wait 0xA4 @ W60
	m4a_bend 0x3B
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note 0xD8 @ N09
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_note_key 0xDB, 0x28 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_note 0xDB @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_bend 0x3B
	m4a_note_key 0xDB, 0x2D @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3B
	m4a_note_key 0xDB, 0x2D @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x37 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x33 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x37 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x3B @ BEND (running status)
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x35 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3B
	m4a_note_key 0xDB, 0x29 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x34 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2B @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x34 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x3B @ BEND (running status)
	m4a_note_key 0xDB, 0x2A @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x36 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2A @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x36 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3B
	m4a_note_key 0xDB, 0x2A @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x34 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2B @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x28 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x35 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x31 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2E @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x3B @ BEND (running status)
	m4a_note_key 0xDB, 0x2B @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x35 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xD2, 0x2B @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_bend 0x3B
	m4a_note_key 0xDB, 0x2C @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x36 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x33 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x44
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key 0xDB, 0x2A @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x28 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x32 @ N12
	m4a_wait 0x86 @ W06
	m4a_bend 0x49
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B6D9C
	m4a_bend 0x40
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_CHAMPION_04
SongTrack_MUS_ENCOUNTER_CHAMPION_04: @ 0x088B6FD5
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x49
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x3F
	m4a_vol 0x2F
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD5, 0x58, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_vol 0x13
	m4a_pan 0x20
	m4a_note_key_vel 0xEF, 0x3E, 0x70 @ N48
	m4a_wait 0x98 @ W24
	m4a_vol 0x11
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_pan 0x22
	m4a_wait 0x82 @ W02
	m4a_vol 0x1A
	m4a_pan 0x29
	m4a_wait 0x87 @ W07
	m4a_vol 0x1B
	m4a_pan 0x2D
	m4a_note_key 0xD5, 0x40 @ N06
	m4a_wait 0x82 @ W02
	m4a_vol 0x1C
	m4a_pan 0x32
	m4a_wait 0x83 @ W03
	m4a_vol 0x1D
	m4a_pan 0x34
	m4a_wait 0x81 @ W01
	m4a_note_key 0xD5, 0x41 @ N06
	m4a_wait 0x82 @ W02
	m4a_vol 0x20
	m4a_pan 0x3A
	m4a_wait 0x84 @ W04
	m4a_vol 0x21
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x82 @ W02
	m4a_pan 0x49
	m4a_wait 0x81 @ W01
	m4a_vol 0x22
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_pan 0x50
	m4a_wait 0x81 @ W01
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x82 @ W02
	m4a_vol 0x25
	m4a_pan 0x56
	m4a_wait 0x84 @ W04
	m4a_vol 0x27
	m4a_pan 0x5A
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x82 @ W02
	m4a_vol 0x2B
	m4a_pan 0x60
	m4a_wait 0x83 @ W03
	m4a_vol 0x31
	m4a_pan 0x64
	m4a_wait 0x81 @ W01
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x82 @ W02
	m4a_vol 0x3A
	m4a_pan 0x69
	m4a_wait 0x84 @ W04
	m4a_vol 0x3E
	m4a_pan 0x6B
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x82 @ W02
	m4a_vol 0x41
	m4a_pan 0x70
	m4a_wait 0x84 @ W04
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_vol 0x28
	m4a_pan 0x24
	m4a_note_key 0xFB, 0x48 @ N84
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_wait 0x98 @ W24
	m4a_vol 0x28
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_vol 0x29
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFF, 0x47 @ N96
	m4a_wait 0xA0 @ W48
	m4a_mod 0x05
	m4a_vol 0x28
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_mod 0x00
	m4a_vol 0x29
	m4a_note 0xEF @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_vol 0x25
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_mod 0x00
	m4a_vol 0x28
	m4a_note_key 0xEF, 0x46 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_vol 0x25
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_mod 0x00
	m4a_vol 0x28
	m4a_note_key 0xE7, 0x51 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4F @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x4D @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x53 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x95 @ W21
	m4a_note_key 0xEE, 0x51 @ N44
	m4a_wait 0x95 @ W21
	m4a_mod 0x05
	m4a_vol 0x25
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x29
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x53 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x92 @ W18
	m4a_note_key 0xEF, 0x51 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_vol 0x28
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x29
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xED, 0x4F @ N42
	m4a_wait 0x86 @ W06
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_vol 0x28
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x29
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x53 @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_wait 0x83 @ W03
	m4a_vol 0x24
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x29
	m4a_note_key 0xD5, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B6FE2
	m4a_goto 0x088B7005
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_CHAMPION_05
SongTrack_MUS_ENCOUNTER_CHAMPION_05: @ 0x088B71B2
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x7E
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x28
	m4a_pan 0x40
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x58, 0x60 @ N06
	m4a_wait 0xA8 @ W72
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0xA4 @ W60
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x58, 0x60 @ N06
	m4a_wait 0xA8 @ W72
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key_vel 0xD5, 0x58, 0x60 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0xA0 @ W48
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x58, 0x60 @ N06
	m4a_wait 0xA0 @ W48
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B71D2
	m4a_patt 0x088B71CA
	m4a_patt 0x088B71D2
	m4a_patt 0x088B71DD
	m4a_patt 0x088B71DD
	m4a_note_key_vel 0xD5, 0x58, 0x70 @ N06
	m4a_wait 0x9A @ W30
	m4a_running_note_key_vel 0x58, 0x50 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x50 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x58, 0x58 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B7200
	m4a_patt 0x088B7200
	m4a_patt 0x088B7200
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x58, 0x5C @ N06
	m4a_wait 0xA0 @ W48
	m4a_running_note_key_vel 0x58, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B7223
	m4a_patt 0x088B7223
	m4a_patt 0x088B7223
	m4a_goto 0x088B71CA
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_CHAMPION_06
SongTrack_MUS_ENCOUNTER_CHAMPION_06: @ 0x088B7241
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_vol 0x26
	m4a_pan 0x03
	m4a_wait 0xB0 @ W96
	m4a_vol 0x08
	m4a_note_key_vel 0xFF, 0x47, 0x70 @ N96
	m4a_wait 0x88 @ W08
	m4a_vol 0x0B
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x95 @ W21
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x41 @ VOL (running status)
	m4a_wait 0x90 @ W16
	m4a_voice 0x50
	m4a_vol 0x2C
	m4a_note_key_vel 0xD8, 0x60, 0x70 @ N09
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x60, 0x5C @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x60, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x60, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x60, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x60, 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x60, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x60, 0x60 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x69, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x5D @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x69 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x69 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x5D @ N03
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_note_key 0xD8, 0x60 @ N09
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x60, 0x5C @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x60, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x60, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x60, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x60, 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x60, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x60, 0x60 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B7296
	m4a_note_key_vel 0xD8, 0x5E, 0x70 @ N09
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x5E, 0x5C @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x5E, 0x70 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x5E, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x5E, 0x70 @ N03
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5E, 0x5C @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x5E, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x5E, 0x60 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_running_note_key_vel 0x67, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x5B @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x67 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x67 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x5B @ N03
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B72D5
	m4a_mod 0x04
	m4a_note_key_vel 0xD5, 0x67, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x5B @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x67 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x67 @ N06
	m4a_wait 0x86 @ W06
	m4a_voice 0x51
	m4a_vol 0x26
	m4a_mod 0x00
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_note_key 0xD2, 0x5B @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFB, 0x45 @ N84
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0xA4 @ W60
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFB, 0x44 @ N84
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0xA4 @ W60
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x43 @ N36
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x40 @ N06
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEF, 0x43 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xFB, 0x45 @ N84
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0xA4 @ W60
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE9, 0x45 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x48 @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF1, 0x42 @ N54
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4A @ N36
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xEB, 0x43 @ N36
	m4a_wait 0x98 @ W24
	m4a_wait 0x83 @ W03
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x47 @ N36
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x44 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_goto 0x088B7272
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_CHAMPION_07
SongTrack_MUS_ENCOUNTER_CHAMPION_07: @ 0x088B73E6
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x53
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x26
	m4a_wait 0xB0 @ W96
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_pan 0x7F
	m4a_note_key_vel 0xFF, 0x3E, 0x70 @ N96
	m4a_wait 0x88 @ W08
	m4a_vol 0x0B
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x95 @ W21
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x41 @ VOL (running status)
	m4a_wait 0x90 @ W16
	m4a_voice 0x53
	m4a_vol 0x26
	m4a_note_key_vel 0xD5, 0x37, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x38 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x38 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x38 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x33 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x34 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x48 @ N24
	m4a_wait 0x98 @ W24
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xD5, 0x35 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x36 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x36 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2B @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x31 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x35 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x37 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x35 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x40
	m4a_tie_key 0x46 @ TIE
	m4a_wait 0x98 @ W24
	m4a_mod 0x04
	m4a_wait 0xA0 @ W48
	m4a_vol 0x28
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x90 @ W16
	m4a_eot
	m4a_pan 0x7F
	m4a_mod 0x00
	m4a_vol 0x26
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x52
	m4a_pan 0x7F
	m4a_note_key 0xFB, 0x4C @ N84
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0xA4 @ W60
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x4D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFB, 0x4A @ N84
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0xA4 @ W60
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4A @ N36
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEF, 0x4A @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xFB, 0x49 @ N84
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0xA4 @ W60
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE9, 0x48 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4C @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF1, 0x48 @ N54
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4B @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4F @ N36
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4A @ N36
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4C @ N36
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x47 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_goto 0x088B7418
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_CHAMPION_08
SongTrack_MUS_ENCOUNTER_CHAMPION_08: @ 0x088B75C9
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_pan 0x40
	m4a_vol 0x4C
	m4a_note_key_vel 0xD5, 0x26, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xED, 0x39 @ N42
	m4a_wait 0x9E @ W42
	m4a_wait 0xB0 @ W96
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B760C
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_patt 0x088B760C
	m4a_patt 0x088B760C
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B765E
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x24, 0x58 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x24, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B7692
	m4a_note_key_vel 0xD5, 0x26, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x24, 0x58 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x24, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x24, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x70 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x24, 0x58 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x26, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x28 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x24, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_goto 0x088B75E3
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_CHAMPION_09
SongTrack_MUS_ENCOUNTER_CHAMPION_09: @ 0x088B76F8
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x1D
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x2F
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_voice 0x1D
	m4a_vol 0x38
	m4a_note_key_vel 0xD5, 0x2F, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x28 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x30 @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x35, 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x37 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x38 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x40 @ N24
	m4a_wait 0x83 @ W03
	m4a_bend 0x3A
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x35 @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x26 @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x18 @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0E @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_note_key_vel 0xD5, 0x2B, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x26 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x28 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2B @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2B @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x26 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x29 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key 0xD5, 0x2D @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x2E @ N03
	m4a_wait 0x8C @ W12
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2D @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2E @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x33, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x35 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x37 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x83 @ W03
	m4a_bend 0x3A
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x35 @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x26 @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x18 @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0E @ BEND (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x40 @ BEND (running status)
	m4a_wait 0xA0 @ W48
	m4a_voice 0x55
	m4a_wait 0x98 @ W24
	m4a_vol 0x15
	m4a_bend 0x42
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x53, 0x68 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x40
	m4a_bend 0x42
	m4a_note_key 0xF5, 0x58 @ N66
	m4a_wait 0x98 @ W24
	m4a_mod 0x07
	m4a_wait 0xA0 @ W48
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x59 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x59 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x56 @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE9, 0x56 @ N30
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE9, 0x58 @ N30
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEF, 0x58 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x55 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_note 0xE1 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x59 @ N06
	m4a_wait 0x92 @ W18
	m4a_note_key 0xEF, 0x56 @ N48
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x51 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x58 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x59 @ N06
	m4a_wait 0x92 @ W18
	m4a_note_key 0xEF, 0x56 @ N48
	m4a_wait 0x8C @ W12
	m4a_mod 0x06
	m4a_wait 0x9C @ W36
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_tie_key 0x5B @ TIE
	m4a_wait 0x86 @ W06
	m4a_wait 0x98 @ W24
	m4a_mod 0x06
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA8 @ W72
	m4a_eot
	m4a_note_key_vel 0xD2, 0x59, 0x3C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_goto 0x088B770B
	m4a_mod 0x00
	m4a_fine
	.globl SongTrack_MUS_ENCOUNTER_CHAMPION_10
SongTrack_MUS_ENCOUNTER_CHAMPION_10: @ 0x088B78E8
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x11
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x2F
	m4a_vol 0x32
	m4a_note_key_vel 0xD5, 0x4B, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x3F @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x3F @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x4F @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_wait 0xB0 @ W96
	m4a_voice 0x11
	m4a_vol 0x34
	m4a_note_key_vel 0xD2, 0x40, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x11
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x47 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x50 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x51 @ N06
	m4a_wait 0x9A @ W30
	m4a_voice 0x2F
	m4a_vol 0x34
	m4a_pan 0x36
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x38 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x11
	m4a_pan 0x20
	m4a_vol 0x34
	m4a_note_key 0xD2, 0x31 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x11
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x50 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x51 @ N06
	m4a_wait 0x9A @ W30
	m4a_voice 0x2F
	m4a_vol 0x34
	m4a_pan 0x35
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x38 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x11
	m4a_pan 0x20
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x26
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x45 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x4E @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x9A @ W30
	m4a_voice 0x2F
	m4a_vol 0x34
	m4a_pan 0x35
	m4a_note_key 0xD5, 0x37 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x11
	m4a_pan 0x20
	m4a_vol 0x34
	m4a_note_key 0xD2, 0x2F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x26
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x4E @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x9A @ W30
	m4a_voice 0x38
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD5, 0x52 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x46 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x46 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_goto 0x088B790E
	m4a_fine
	.globl SongHeader_MUS_ENCOUNTER_CHAMPION
SongHeader_MUS_ENCOUNTER_CHAMPION: @ 0x088B7A18
	@ M4A song header: song 454 (MUS_ENCOUNTER_CHAMPION)
	m4a_song_header 10, 0, 0, 0xB2, VoiceGroup_JP_0861C19C
	.4byte SongTrack_MUS_ENCOUNTER_CHAMPION_01
	.4byte SongTrack_MUS_ENCOUNTER_CHAMPION_02
	.4byte SongTrack_MUS_ENCOUNTER_CHAMPION_03
	.4byte SongTrack_MUS_ENCOUNTER_CHAMPION_04
	.4byte SongTrack_MUS_ENCOUNTER_CHAMPION_05
	.4byte SongTrack_MUS_ENCOUNTER_CHAMPION_06
	.4byte SongTrack_MUS_ENCOUNTER_CHAMPION_07
	.4byte SongTrack_MUS_ENCOUNTER_CHAMPION_08
	.4byte SongTrack_MUS_ENCOUNTER_CHAMPION_09
	.4byte SongTrack_MUS_ENCOUNTER_CHAMPION_10

	.globl SongTrack_MUS_CREDITS_01
SongTrack_MUS_CREDITS_01: @ 0x088B7A48
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x2F
	m4a_voice 0x01
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x58
	m4a_pan 0x46
	m4a_bend 0x40
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x3B, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N24 (running status)
	m4a_wait 0x92 @ W18
	m4a_vol 0x4D
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x3C, 0x4C @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2D
	m4a_running_note_key_vel 0x39, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2A
	m4a_running_note_key_vel 0x3B, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2F
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2D
	m4a_note_key_vel 0xE9, 0x43, 0x40 @ N30
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xDB, 0x43, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_tempo 0x2A
	m4a_running_note_key_vel 0x4A, 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x48, 0x48 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tempo 0x26
	m4a_running_note_key 0x47 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x45, 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tempo 0x2F
	m4a_note_key_vel 0xFF, 0x47, 0x60 @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xE7, 0x45, 0x4C @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x47, 0x50 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x48, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x4A, 0x5C @ N12
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x43, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x45, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xFD, 0x47, 0x6C @ N90
	m4a_wait 0xAE @ W90
	m4a_note_key_vel 0xD2, 0x43, 0x40 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xFF, 0x43, 0x60 @ N96
	m4a_wait 0xB0 @ W96
	m4a_running_note_key_vel 0x48, 0x6C @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xE7, 0x47, 0x4C @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x48, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x4A, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE1, 0x4C, 0x50 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x42, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xFF, 0x48, 0x70 @ N96
	m4a_wait 0xB0 @ W96
	m4a_tempo 0x2D
	m4a_vol 0x1F
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x29
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE1, 0x54, 0x60 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD5, 0x53, 0x5C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_tempo 0x2F
	m4a_note_key_vel 0xEB, 0x53, 0x70 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x52, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE9, 0x4A, 0x60 @ N30
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD2, 0x4A, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x4A, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x51, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x53, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x54, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x55, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x54, 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x6C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4F, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE1, 0x53, 0x70 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x4F, 0x50 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x4F, 0x6C @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD5, 0x4F, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4E, 0x28 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x34 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4E, 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4F, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x47, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x5B
	m4a_note_key_vel 0xD3, 0x5B, 0x2C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x42
	m4a_note_key_vel 0xD3, 0x58, 0x24 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x33
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x27
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x20 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x45
	m4a_note_key_vel 0xED, 0x54, 0x6C @ N42
	m4a_wait 0x9E @ W42
	m4a_note_key_vel 0xD2, 0x4C, 0x50 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x4C, 0x64 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x4C, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x53, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4C, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x54, 0x64 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4C, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x54, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x56, 0x64 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4C, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x56, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x58, 0x64 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x51, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x58, 0x4C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5A, 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5B, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_tempo 0x2D
	m4a_note_key_vel 0xE7, 0x56, 0x60 @ N24
	m4a_wait 0x98 @ W24
	m4a_tempo 0x28
	m4a_note_key_vel 0xDB, 0x53, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x54, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x56, 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_tempo 0x2E
	m4a_pan 0x60
	m4a_note_key_vel 0xD5, 0x5B, 0x2C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x50
	m4a_note_key 0xD5, 0x5A @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_tempo 0x2B
	m4a_pan 0x48
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x28 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x20 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_tempo 0x28
	m4a_pan 0x38
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x30
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_tempo 0x22
	m4a_pan 0x27
	m4a_note_key 0xD5, 0x51 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4F, 0x20 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_tempo 0x2F
	m4a_pan 0x45
	m4a_note_key_vel 0xE9, 0x47, 0x70 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key_vel 0xDB, 0x48, 0x54 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4A, 0x5C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x47, 0x68 @ N36
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2E
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x48, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4A, 0x64 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_tempo 0x2F
	m4a_note_key_vel 0xDB, 0x4D, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4B, 0x54 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tempo 0x2D
	m4a_note_key_vel 0xE9, 0x47, 0x60 @ N30
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2A
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x48, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4A, 0x64 @ N06
	m4a_wait 0x86 @ W06
	m4a_tempo 0x2F
	m4a_note_key_vel 0xE9, 0x48, 0x70 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key_vel 0xDB, 0x4A, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4C, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x48, 0x68 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x4A, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x64 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x4F, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4E, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x54 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4E, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tempo 0x2D
	m4a_running_note_key_vel 0x4A, 0x60 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x48, 0x70 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tempo 0x27
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x47, 0x64 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x45, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_tempo 0x2F
	m4a_note_key 0xE9, 0x53 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key_vel 0xDB, 0x54, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x56, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x53, 0x68 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x54, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x56, 0x64 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x59, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x57, 0x54 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tempo 0x2D
	m4a_note_key_vel 0xE9, 0x53, 0x60 @ N30
	m4a_wait 0x98 @ W24
	m4a_tempo 0x29
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x54, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x56, 0x64 @ N06
	m4a_wait 0x86 @ W06
	m4a_tempo 0x2F
	m4a_note_key_vel 0xDB, 0x54, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x54 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x51, 0x58 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x4C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x4F, 0x68 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD2, 0x4F, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x51, 0x5C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x4F, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4E, 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_bend 0x40
	m4a_note_key_vel 0xF7, 0x4F, 0x60 @ N72
	m4a_wait 0x9C @ W36
	m4a_tempo 0x2E
	m4a_wait 0x8C @ W12
	m4a_tempo 0x2B
	m4a_wait 0x98 @ W24
	m4a_tempo 0x26
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2F
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_tempo 0x2D
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x29
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x2F
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x2C
	m4a_wait 0x98 @ W24
	m4a_tempo 0x20
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2C
	m4a_wait 0x98 @ W24
	m4a_tempo 0x29
	m4a_wait 0x98 @ W24
	m4a_tempo 0x23
	m4a_wait 0x98 @ W24
	m4a_tempo 0x20
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2D
	m4a_wait 0xA8 @ W72
	m4a_tempo 0x2B
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2D
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x2B
	m4a_wait 0x98 @ W24
	m4a_tempo 0x29
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2D
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x2D
	m4a_wait 0x98 @ W24
	m4a_tempo 0x27
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2D
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x2D
	m4a_wait 0x98 @ W24
	m4a_tempo 0x29
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2E
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x2C
	m4a_wait 0x98 @ W24
	m4a_tempo 0x25
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2E
	m4a_wait 0xA8 @ W72
	m4a_tempo 0x29
	m4a_wait 0x98 @ W24
	m4a_tempo 0x2F
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_tempo 0x29
	m4a_wait 0xB0 @ W96
	m4a_tempo 0x5B
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_CREDITS_02
SongTrack_MUS_CREDITS_02: @ 0x088B7D7E
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x01
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x64
	m4a_pan 0x40
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x3B, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3C, 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE9, 0x43, 0x40 @ N30
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xDB, 0x43, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4A, 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x48, 0x48 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x45, 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xFF, 0x47, 0x60 @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xE7, 0x45, 0x4C @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x47, 0x50 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x48, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x4A, 0x5C @ N12
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x43, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x45, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xFD, 0x47, 0x6C @ N90
	m4a_wait 0xAE @ W90
	m4a_note_key_vel 0xD2, 0x43, 0x40 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xFF, 0x43, 0x60 @ N96
	m4a_wait 0xB0 @ W96
	m4a_running_note_key_vel 0x48, 0x6C @ N96 (running status)
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xE7, 0x47, 0x4C @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x48, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x4A, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE1, 0x4C, 0x50 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x42, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xFF, 0x48, 0x5C @ N96
	m4a_wait 0xB0 @ W96
	m4a_vol 0x4E
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xDB, 0x56, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE1, 0x54, 0x60 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD5, 0x53, 0x5C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x53, 0x70 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x52, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE9, 0x4A, 0x60 @ N30
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD2, 0x4A, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x4A, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x51, 0x54 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x53, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x54, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x55, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x54, 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x6C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4F, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE1, 0x53, 0x70 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x4F, 0x50 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x4F, 0x6C @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD5, 0x4F, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4E, 0x28 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x34 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4E, 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4F, 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x47, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x5B
	m4a_note_key_vel 0xD3, 0x5B, 0x2C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x41
	m4a_note_key_vel 0xD3, 0x58, 0x28 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x35
	m4a_note_key 0xD3, 0x53 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x28
	m4a_note_key 0xD3, 0x4F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x40
	m4a_note_key_vel 0xED, 0x54, 0x6C @ N42
	m4a_wait 0x9E @ W42
	m4a_note_key_vel 0xD2, 0x4C, 0x50 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x4C, 0x64 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x4C, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x53, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4C, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x54, 0x64 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4C, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x54, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x56, 0x64 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4C, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x56, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x58, 0x64 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x51, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x58, 0x4C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5A, 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x5B, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x56 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x53, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x54, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x56, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x59
	m4a_note_key_vel 0xD5, 0x5B, 0x2C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x50
	m4a_note_key 0xD5, 0x5A @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x45
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x5A, 0x28 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x20 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x38
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x30
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x26
	m4a_note_key 0xD5, 0x51 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4F, 0x20 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_vol 0x62
	m4a_pan 0x40
	m4a_note_key_vel 0xE9, 0x47, 0x58 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key_vel 0xDB, 0x48, 0x54 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4A, 0x5C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x47, 0x68 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x48, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4A, 0x64 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x4D, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4B, 0x54 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE9, 0x47, 0x50 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key_vel 0xDB, 0x48, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4A, 0x64 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE9, 0x48, 0x60 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key_vel 0xDB, 0x4A, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4C, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x48, 0x68 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x4A, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x64 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x4F, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4E, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x54 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4E, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4A, 0x60 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x48, 0x70 @ N12 (running status)
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD5, 0x47, 0x64 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x45, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_vol 0x4E
	m4a_note_key 0xE9, 0x53 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key_vel 0xDB, 0x54, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x56, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x53, 0x68 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x54, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x56, 0x64 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x59, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x57, 0x54 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE9, 0x53, 0x60 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key_vel 0xDB, 0x54, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x56, 0x64 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x54, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x54 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x51, 0x58 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x4C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x4F, 0x68 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD2, 0x4F, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x51, 0x5C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x4F, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4E, 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xF7, 0x4F, 0x60 @ N72
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_voice 0x49
	m4a_wait 0xB0 @ W96
	m4a_pan 0x23
	m4a_vol 0x1D
	m4a_note_key_vel 0xD5, 0x5B, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x5D @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x5D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x5B @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x5B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x58 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x60 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x62 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x5D @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x5D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x5B @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x58 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x5F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x60 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x5F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x58 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x62 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x60 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x5F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x60 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x5F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x5D @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x5B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x5D, 0x54 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5F, 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x61, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x62 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x60 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x51 @ N18
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD3, 0x62, 0x5C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x64, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x62, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x60, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x62, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x60, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5F, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x60, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5F, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5D, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5F, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5D, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5D, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x38
	m4a_pan 0x1A
	m4a_vol 0x30
	m4a_note_key_vel 0xEA, 0x4A, 0x70 @ N32
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x92 @ W18
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEA, 0x4A, 0x70 @ N32
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4A, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xE7, 0x47, 0x70 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x3C
	m4a_vol 0x3B
	m4a_pan 0x17
	m4a_note_key 0xE9, 0x45 @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key 0xDB, 0x47 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x44 @ N12
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x3C
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x43 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x42 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_vol 0x39
	m4a_note_key 0xDB, 0x43 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x38
	m4a_note_key 0xE9, 0x4A @ N30
	m4a_wait 0x9A @ W30
	m4a_note_key 0xDB, 0x4C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4A @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x50 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x50 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x53 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE9, 0x4C @ N30
	m4a_wait 0xA0 @ W48
	m4a_pan 0x6A
	m4a_vol 0x2C
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x48 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x42 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x17
	m4a_vol 0x3B
	m4a_note_key 0xE7, 0x4F @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x51 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x52 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x53 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x30
	m4a_pan 0x40
	m4a_note_key 0xD5, 0x56 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF3, 0x58 @ N60
	m4a_wait 0x98 @ W24
	m4a_vol 0x3A
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x27 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x26 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x8A @ W10
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x56 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF3, 0x58 @ N60
	m4a_wait 0x98 @ W24
	m4a_vol 0x3B
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x27 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_note_key 0xD5, 0x56 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x5B @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x59 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x58, 0x64 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x59, 0x5C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x58, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x57 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x58, 0x64 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEF, 0x56, 0x70 @ N48
	m4a_wait 0x98 @ W24
	m4a_vol 0x3B
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_note_key 0xE7, 0x55 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x52 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x51 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4F @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF3, 0x59 @ N60
	m4a_wait 0x98 @ W24
	m4a_vol 0x39
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x55 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEF, 0x59 @ N48
	m4a_wait 0x8C @ W12
	m4a_vol 0x39
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x8A @ W10
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x56 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x59 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x56 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_vol 0x3B
	m4a_note_key 0xFE, 0x55 @ N92
	m4a_wait 0x98 @ W24
	m4a_vol 0x37
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_tie_key 0x58 @ TIE
	m4a_wait 0x8C @ W12
	m4a_vol 0x07
	m4a_wait 0x98 @ W24
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x8A @ W10
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x8A @ W10
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x89 @ W09
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x27 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x38 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x43 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x46 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x48 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x4B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x4D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x4E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x51 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x52 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x56 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_eot
	m4a_voice 0x2F
	m4a_pan 0x72
	m4a_note_key_vel 0xDB, 0x39, 0x60 @ N12
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_CREDITS_03
SongTrack_MUS_CREDITS_03: @ 0x088B8395
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x01
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_lfos 0x2C
	m4a_pan 0x28
	m4a_vol 0x5D
	m4a_tie_key_vel 0x2B, 0x78 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_note 0xFF @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xEF, 0x24, 0x40 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xDB, 0x30, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x32, 0x4C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x2D, 0x54 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x26, 0x70 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tie_key 0x2B @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_tie_key 0x28 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA8 @ W72
	m4a_eot
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tie_key 0x2D @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_note_key 0xFF, 0x32 @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xEB, 0x26, 0x58 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xEF, 0x39, 0x70 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xDB, 0x26 @ N12
	m4a_wait 0x8C @ W12
	m4a_tie_key 0x2B @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_tie_key 0x28 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA8 @ W72
	m4a_eot
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tie_key 0x2D @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_note_key 0xFF, 0x32 @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xFB, 0x32, 0x58 @ N84
	m4a_wait 0xAC @ W84
	m4a_note_key_vel 0xDB, 0x26, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xEF, 0x2B, 0x70 @ N48
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x2A @ N48 (running status)
	m4a_wait 0xA0 @ W48
	m4a_pend
	m4a_running_note_key 0x29 @ N48 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x28 @ N48 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x2D @ N48 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x2C @ N48 (running status)
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xE7, 0x32 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x30, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x2F, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x2D, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B83FD
	m4a_note_key_vel 0xEF, 0x29, 0x70 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xEB, 0x28 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xDB, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEF, 0x2D @ N48
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x32 @ N48 (running status)
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xF7, 0x2B @ N72
	m4a_wait 0xA8 @ W72
	m4a_voice 0x3A
	m4a_pan 0x40
	m4a_vol 0x4B
	m4a_note_key 0xDB, 0x1A @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x1E @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tie_key 0x1F @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_tie_key 0x1C @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA8 @ W72
	m4a_eot
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x1A @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_tie_key 0x21 @ TIE
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_eot
	m4a_note_key 0xFF, 0x26 @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xF7, 0x1A, 0x58 @ N72
	m4a_wait 0xA8 @ W72
	m4a_note_key_vel 0xDB, 0x1A, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x1E @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x3A
	m4a_vol 0x4E
	m4a_note_key 0xEB, 0x1F @ N36
	m4a_wait 0x9C @ W36
	m4a_vol 0x4E
	m4a_note_key 0xD5, 0x1E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x1F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xEF @ N48
	m4a_wait 0xA0 @ W48
	m4a_note 0xEB @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xDB, 0x1E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x1F @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xDB, 0x1E @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x1C @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x1B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x1C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xEF @ N48
	m4a_wait 0xA0 @ W48
	m4a_note 0xED @ N42
	m4a_wait 0x9E @ W42
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x1E @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x21 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x20 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x21 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xEB @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xEB @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xEB @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x23 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x24 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xFF, 0x26 @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xFB, 0x26, 0x58 @ N84
	m4a_wait 0xAC @ W84
	m4a_note_key_vel 0xDB, 0x1A, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD1, 0x2B, 0x50 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD5, 0x29, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD1, 0x29, 0x50 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD5, 0x26, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD1, 0x26, 0x50 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_pan 0x40
	m4a_vol 0x55
	m4a_note_key_vel 0xDB, 0x1F, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x23 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x24 @ N36
	m4a_wait 0x8C @ W12
	m4a_vol 0x51
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0x8C @ W12
	m4a_vol 0x52
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4D @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x40 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note_key 0xEB, 0x23 @ N36
	m4a_wait 0x8C @ W12
	m4a_vol 0x51
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0x8C @ W12
	m4a_vol 0x52
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4D @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x40 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note_key 0xEB, 0x22 @ N36
	m4a_wait 0x8C @ W12
	m4a_vol 0x51
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0x8C @ W12
	m4a_vol 0x52
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4D @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x40 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note_key 0xEB, 0x21 @ N36
	m4a_wait 0x8C @ W12
	m4a_vol 0x51
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0x8C @ W12
	m4a_vol 0x52
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4D @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x40 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note_key 0xEB, 0x26 @ N36
	m4a_wait 0x8C @ W12
	m4a_vol 0x51
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0x8C @ W12
	m4a_vol 0x52
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4D @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x40 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note_key 0xEB, 0x25 @ N36
	m4a_wait 0x8C @ W12
	m4a_vol 0x51
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0x8C @ W12
	m4a_vol 0x52
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4D @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x40 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note_key 0xEB, 0x23 @ N36
	m4a_wait 0x8C @ W12
	m4a_vol 0x51
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x2B @ N36
	m4a_wait 0x8C @ W12
	m4a_vol 0x51
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xEB, 0x2D, 0x70 @ N36
	m4a_wait 0x8C @ W12
	m4a_vol 0x51
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2B @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x29 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x28 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key 0xEB, 0x2B @ N36
	m4a_wait 0x8C @ W12
	m4a_vol 0x51
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x29 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x28 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2B @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B85BA
	m4a_patt 0x088B85BA
	m4a_patt 0x088B85BA
	m4a_vol 0x0A
	m4a_tie_key_vel 0x2D, 0x70 @ TIE
	m4a_wait 0x85 @ W05
	m4a_vol 0x0B
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x90 @ W16
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x8A @ W10
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x38 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x46 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x48 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x4D @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x54 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x58 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x5B @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x5D @ VOL (running status)
	m4a_wait 0x8A @ W10
	m4a_eot
	m4a_note_key 0xD5, 0x21 @ N06
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_CREDITS_04
SongTrack_MUS_CREDITS_04: @ 0x088B864E
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x01
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x55
	m4a_vol 0x45
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x32, 0x50 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x50 @ N24 (running status)
	m4a_wait 0x95 @ W21
	m4a_pan 0x5E
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xE7, 0x32, 0x4C @ N24
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x32, 0x50 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x50 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x37, 0x74 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x32, 0x50 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x50 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x32, 0x4C @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x3C, 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xEB, 0x3C, 0x54 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xE1, 0x3E, 0x5C @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xE9, 0x3E, 0x50 @ N30
	m4a_wait 0x9A @ W30
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x32, 0x44 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x40 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x44 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x32, 0x40 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x58 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x2F, 0x44 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x2F, 0x40 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x2F, 0x44 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x2F, 0x40 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x9C @ W36
	m4a_pend
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x34, 0x44 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x34, 0x40 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x34, 0x44 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x34, 0x40 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x34, 0x58 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x39, 0x44 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x40 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x39, 0x44 @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xEA, 0x2D, 0x5C @ N32
	m4a_wait 0x9B @ W32
	m4a_wait 0x81 @ W01
	m4a_note_key_vel 0xD2, 0x51, 0x4C @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xEF, 0x3C, 0x70 @ N48
	m4a_wait 0xA0 @ W48
	m4a_vol 0x49
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x32, 0x44 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x40 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x44 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B86A3
	m4a_patt 0x088B86B0
	m4a_patt 0x088B86BE
	m4a_patt 0x088B86C8
	m4a_patt 0x088B86D6
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x39, 0x44 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x40 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x44 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_wait 0xA8 @ W72
	m4a_pan 0x40
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x43, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x5F
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x32, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x32, 0x6C @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x2F, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x2F, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x2F, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x2F, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x34, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x34, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x34, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD8, 0x34, 0x70 @ N09
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x39, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x39, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x32, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x32, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x2F, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x2F, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x2F, 0x58 @ N24 (running status)
	m4a_wait 0x9C @ W36
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x34, 0x5C @ N12
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x39, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x39, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x32, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x32, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x32, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x49
	m4a_pan 0x40
	m4a_vol 0x2B
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_note_key_vel 0xD2, 0x54, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xF6, 0x53, 0x70 @ N68
	m4a_wait 0x95 @ W21
	m4a_mod 0x07
	m4a_vol 0x28
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2B
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x51 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x53, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x54, 0x64 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x56, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x55, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x54, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x6C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF7, 0x53 @ N72
	m4a_wait 0x98 @ W24
	m4a_vol 0x25
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_mod 0x00
	m4a_vol 0x0C
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x50, 0x60 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4F, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF3, 0x4F @ N60
	m4a_wait 0xA4 @ W60
	m4a_mod 0x00
	m4a_wait 0x95 @ W21
	m4a_note_key 0xD2, 0x53 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xEB, 0x54 @ N36
	m4a_wait 0x98 @ W24
	m4a_vol 0x28
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2C
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x55, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xEE, 0x54, 0x70 @ N44
	m4a_wait 0x95 @ W21
	m4a_mod 0x07
	m4a_vol 0x28
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_mod 0x00
	m4a_vol 0x2C
	m4a_note_key 0xE7, 0x53 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x56 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x57, 0x54 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x56, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x55, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x54, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xF6, 0x54 @ N68
	m4a_wait 0x95 @ W21
	m4a_mod 0x07
	m4a_vol 0x25
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x30
	m4a_pan 0x40
	m4a_vol 0x3D
	m4a_mod 0x00
	m4a_wait 0x98 @ W24
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x4A, 0x3C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4E, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x53, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x54, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xDB, 0x56, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x54 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x53 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x52, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE9, 0x4A, 0x60 @ N30
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD2, 0x4A, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x4A, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x51, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x53, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x54, 0x64 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x56, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x55, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x6C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4F, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE1, 0x53, 0x70 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x4F, 0x5C @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD5, 0x4F, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4E, 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4E, 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEF, 0x4F @ N48
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xEB, 0x54, 0x6C @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x53, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x4C, 0x50 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD2, 0x4C, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x53, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x56 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x51, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x58, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xDB, 0x5B @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x58 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x56, 0x5C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x56, 0x6C @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x53, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x56 @ N18
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD3, 0x5B, 0x5C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5D, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x54, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x54, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x54, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x3C
	m4a_vol 0x5A
	m4a_pan 0x40
	m4a_note_key_vel 0xE9, 0x47, 0x70 @ N30
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x92 @ W18
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDB, 0x48 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4A, 0x6C @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x47 @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x4D @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x74 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x4B, 0x6C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4C, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4A, 0x68 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE9, 0x47, 0x60 @ N30
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x8C @ W12
	m4a_voice 0x30
	m4a_vol 0x4A
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_note_key_vel 0xDB, 0x48, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4A, 0x64 @ N06
	m4a_wait 0x86 @ W06
	m4a_pan 0x40
	m4a_note_key_vel 0xE9, 0x48, 0x70 @ N30
	m4a_wait 0x8C @ W12
	m4a_mod 0x04
	m4a_wait 0x92 @ W18
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key_vel 0xDB, 0x4A, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4C, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x48, 0x68 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x47, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x48 @ N12
	m4a_wait 0x92 @ W18
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4A, 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x64 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x4F, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4E, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x4C, 0x54 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4E, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4A, 0x5C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x4A, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x48, 0x70 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_vol 0x43
	m4a_note_key 0xDB, 0x47 @ N12
	m4a_wait 0x8C @ W12
	m4a_vol 0x50
	m4a_note_key 0xDB, 0x48 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x38
	m4a_vol 0x4B
	m4a_note_key 0xE9, 0x53 @ N30
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x92 @ W18
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key_vel 0xDB, 0x54, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x56, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x53, 0x68 @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key_vel 0xD5, 0x54, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x56, 0x64 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xDB, 0x59, 0x68 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x58, 0x5C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x57, 0x70 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x58 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE9, 0x53, 0x60 @ N30
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x92 @ W18
	m4a_voice 0x30
	m4a_vol 0x4A
	m4a_mod 0x00
	m4a_note_key_vel 0xDB, 0x54, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x56, 0x64 @ N06
	m4a_wait 0x86 @ W06
	m4a_vol 0x51
	m4a_note_key_vel 0xDB, 0x54, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x54 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x51, 0x58 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4C, 0x4C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x4F, 0x68 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x48, 0x70 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x53 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x55 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pan 0x40
	m4a_vol 0x40
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4F @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_voice 0x3C
	m4a_vol 0x45
	m4a_note_key 0xEB, 0x45 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEF, 0x4C @ N48
	m4a_wait 0x98 @ W24
	m4a_vol 0x45
	m4a_mod 0x05
	m4a_wait 0x82 @ W02
	m4a_vol 0x42
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x38 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_mod 0x00
	m4a_note_key 0xEB, 0x47 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x4F @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF7, 0x4C @ N72
	m4a_wait 0x98 @ W24
	m4a_vol 0x45
	m4a_mod 0x06
	m4a_wait 0x82 @ W02
	m4a_vol 0x42
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x38 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_mod 0x00
	m4a_note_key 0xE7, 0x4A @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xF7, 0x4C @ N72
	m4a_wait 0x98 @ W24
	m4a_vol 0x45
	m4a_mod 0x06
	m4a_wait 0x82 @ W02
	m4a_vol 0x42
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x38 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_mod 0x00
	m4a_note_key 0xE4, 0x4A @ N21
	m4a_wait 0x98 @ W24
	m4a_note_key 0xF7, 0x4C @ N72
	m4a_wait 0x98 @ W24
	m4a_vol 0x42
	m4a_mod 0x06
	m4a_wait 0x82 @ W02
	m4a_vol 0x42
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x38 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_mod 0x00
	m4a_note_key 0xE4, 0x4A @ N21
	m4a_wait 0x98 @ W24
	m4a_vol 0x06
	m4a_pan 0x60
	m4a_tie_key 0x49 @ TIE
	m4a_wait 0x82 @ W02
	m4a_vol 0x07
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x89 @ W09
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x89 @ W09
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x37 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x38 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x46 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x4B @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x4E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x4F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x51 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x57 @ VOL (running status)
	m4a_wait 0x99 @ W28
	m4a_eot
	m4a_note_key 0xD2, 0x2D @ N03
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_CREDITS_05
SongTrack_MUS_CREDITS_05: @ 0x088B8BD8
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x2E
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_vol 0x5A
	m4a_pan 0x5C
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA0 @ W48
	m4a_running_cmd_u8 0x5E @ PAN (running status)
	m4a_wait 0xA0 @ W48
	m4a_vol 0x38
	m4a_pan 0x23
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x53, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_vol 0x39
	m4a_pan 0x20
	m4a_note_key_vel 0xD2, 0x47, 0x64 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4A, 0x68 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x28
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x30
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x30
	m4a_note_key 0xD2, 0x51 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x53, 0x5C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x56, 0x60 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x5A
	m4a_note_key_vel 0xD2, 0x5F, 0x64 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5D, 0x60 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x50
	m4a_note_key 0xD2, 0x5B @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x53, 0x5C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_vol 0x39
	m4a_pan 0x49
	m4a_note_key_vel 0xD5, 0x53, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x52, 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x33
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x56, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x20
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x5B @ N12
	m4a_wait 0x8C @ W12
	m4a_vol 0x39
	m4a_note_key_vel 0xD2, 0x4A, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4F, 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x27
	m4a_note_key 0xD2, 0x53 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x36
	m4a_note_key 0xD2, 0x56 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5D, 0x5C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x58
	m4a_note_key_vel 0xD2, 0x5F, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x42
	m4a_note_key 0xD2, 0x5D @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x20
	m4a_vol 0x39
	m4a_note_key_vel 0xDB, 0x51, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x54 @ N12
	m4a_wait 0x9C @ W36
	m4a_vol 0x39
	m4a_pan 0x5A
	m4a_note_key_vel 0xD2, 0x60, 0x5C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5D, 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x48
	m4a_note_key 0xD2, 0x5A @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x30
	m4a_note_key 0xD2, 0x54 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x1F
	m4a_note_key 0xD2, 0x58 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x54, 0x60 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_vol 0x39
	m4a_note_key_vel 0xD5, 0x51, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5D @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5B @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x2E
	m4a_vol 0x39
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x9C @ W36
	m4a_pan 0x19
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x2B
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x6A
	m4a_note_key 0xD2, 0x56 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x59
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x47
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_vol 0x3E
	m4a_pan 0x20
	m4a_note_key_vel 0xD5, 0x4F, 0x60 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x47, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x30
	m4a_note_key_vel 0xD5, 0x53, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x39
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_pan 0x60
	m4a_note_key_vel 0xD3, 0x5B, 0x5C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4F, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x4F
	m4a_note_key_vel 0xD3, 0x53, 0x58 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4F, 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x4C, 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x40
	m4a_note_key_vel 0xD3, 0x4F, 0x48 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x47, 0x40 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_voice 0x30
	m4a_wait 0xB0 @ W96
	m4a_running_cmd_u8 0x2F @ VOICE (running status)
	m4a_vol 0x3E
	m4a_pan 0x40
	m4a_wait 0xA0 @ W48
	m4a_vol 0x58
	m4a_note_key_vel 0xD3, 0x32, 0x38 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x74 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_vol 0x58
	m4a_note_key_vel 0xDE, 0x2B, 0x70 @ N15
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD1, 0x2B, 0x38 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xDD, 0x2A, 0x48 @ N14
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD1, 0x2A, 0x34 @ N02
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x2A, 0x30 @ N02 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x2A, 0x34 @ N02 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD3, 0x29, 0x40 @ N04
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x28, 0x28 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x29 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x28 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x27 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_vol 0x58
	m4a_note_key 0xD3, 0x28 @ N04
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x34, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x2D @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD3, 0x30, 0x28 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x2F @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x2C @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x30 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key_vel 0x32, 0x3C @ N04 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x30, 0x28 @ N04 (running status)
	m4a_wait 0x98 @ W24
	m4a_voice 0x2F
	m4a_note_key_vel 0xD3, 0x32, 0x38 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x3C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x70 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x32, 0x74 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_vol 0x64
	m4a_pan 0x40
	m4a_note_key_vel 0xE7, 0x2B, 0x70 @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD1, 0x2B, 0x50 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xE7, 0x2A, 0x70 @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD1, 0x2A, 0x50 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xE7, 0x29, 0x70 @ N24
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xD7, 0x2F, 0x60 @ N08
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xDB, 0x28, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x2F, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x2F, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x28 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xEF, 0x2D, 0x7C @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xD3, 0x32, 0x68 @ N04
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x2D, 0x54 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x32, 0x70 @ N04 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xDB, 0x2D, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x2F
	m4a_vol 0x64
	m4a_pan 0x28
	m4a_note_key_vel 0xD5, 0x37, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD1, 0x32, 0x50 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_pan 0x5A
	m4a_note_key_vel 0xD5, 0x35, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD1, 0x32, 0x50 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_pan 0x29
	m4a_note_key_vel 0xD5, 0x32, 0x70 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD1, 0x32, 0x50 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_pan 0x40
	m4a_note_key 0xD1, 0x2B @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x2B, 0x54 @ N02 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x2B, 0x60 @ N02 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x2B, 0x6C @ N02 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x2B, 0x7C @ N02 (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x01
	m4a_vol 0x31
	m4a_pan 0x20
	m4a_note_key_vel 0xD5, 0x3C, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x41 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x46 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x51 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x51 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4D @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x52 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x49 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x49 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x53 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x0E
	m4a_note_key 0xEF, 0x45 @ N48
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x40 @ N48 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x43 @ N48 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x3E @ N48 (running status)
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xF7, 0x40, 0x70 @ N72
	m4a_wait 0xA8 @ W72
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088B8FF5
	m4a_note_key_vel 0xF7, 0x40, 0x70 @ N72
	m4a_wait 0xB0 @ W96
	m4a_voice 0x30
	m4a_vol 0x06
	m4a_tie_key 0x45 @ TIE
	m4a_wait 0x88 @ W08
	m4a_vol 0x07
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x13 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x38 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x40 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x46 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x49 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x4B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x4E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x4F @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x51 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x53 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x55 @ VOL (running status)
	m4a_wait 0x98 @ W24
	m4a_eot
	m4a_voice 0x2F
	m4a_vol 0x64
	m4a_note_key 0xE7, 0x2D @ N24
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_CREDITS_06
SongTrack_MUS_CREDITS_06: @ 0x088B906A
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x04
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x03
	m4a_vol 0x2C
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_vol 0x1E
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x3E, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x3E, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B908D
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x3B, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x40, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B90A9
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x42, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_vol 0x0A
	m4a_note_key 0xEF, 0x3E @ N48
	m4a_wait 0x86 @ W06
	m4a_vol 0x0A
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_note_key 0xEF, 0x45 @ N48
	m4a_wait 0x83 @ W03
	m4a_vol 0x0B
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x38 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B907F
	m4a_patt 0x088B908D
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x3E, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x4C, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_patt 0x088B9124
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xE7, 0x4E, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x3E @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x44 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4A @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x50 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x83 @ W03
	m4a_vol 0x25
	m4a_wait 0x89 @ W09
	m4a_voice 0x04
	m4a_vol 0x25
	m4a_note_key 0xD2, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xEE, 0x4F @ N44
	m4a_wait 0x95 @ W21
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_note_key 0xE7, 0x4E @ N24
	m4a_wait 0x98 @ W24
	m4a_mod 0x00
	m4a_note_key 0xDB, 0x4A @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x4A @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4E @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4F @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x51 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDE, 0x4F @ N15
	m4a_wait 0x8C @ W12
	m4a_mod 0x00
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x4C @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x4B @ N24
	m4a_wait 0x98 @ W24
	m4a_mod 0x00
	m4a_note_key 0xE7, 0x4C @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEB, 0x4F @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xEE, 0x4F @ N44
	m4a_wait 0x95 @ W21
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x4E @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4F @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x51 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x54 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x53, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x51, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x52 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xF6, 0x51 @ N68
	m4a_wait 0x95 @ W21
	m4a_mod 0x07
	m4a_wait 0xA0 @ W48
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xEF, 0x3E @ N48
	m4a_wait 0x8F @ W15
	m4a_vol 0x2D
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x20 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_note_key 0xDB, 0x3C @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x32 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x44
	m4a_vol 0x28
	m4a_note_key 0xD5, 0x2B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x31 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x34 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x34 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x34 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x33 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x34 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x34 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x34 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x37 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD8, 0x39 @ N09
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x37 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x34 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x32 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x36 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x42 @ N18
	m4a_wait 0xB0 @ W96
	m4a_voice 0x54
	m4a_note_key 0xEA, 0x43 @ N32
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x92 @ W18
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x43, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEA, 0x42, 0x70 @ N32
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x42, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xE7, 0x44, 0x70 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xE9, 0x43 @ N30
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x92 @ W18
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDB, 0x48 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x42 @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x41 @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_voice 0x44
	m4a_pan 0x02
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xDB, 0x43, 0x74 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4C, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x43, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4A, 0x54 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x43, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4C, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x43, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4C, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x43, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4A, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x43, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4C, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x43, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4F, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x43, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4D, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x43, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4C, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x43, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x45 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x51, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4F, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4C, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_wait 0x8F @ W15
	m4a_note 0xDB @ N12
	m4a_wait 0x89 @ W09
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4D, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4C, 0x60 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4D, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_wait 0x8F @ W15
	m4a_note 0xDB @ N12
	m4a_wait 0x89 @ W09
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4D, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4C, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key_vel 0xDB, 0x4D, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key_vel 0xDB, 0x45, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x43 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key 0xDB, 0x4A @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key 0xDB, 0x43 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x02 @ PAN (running status)
	m4a_note_key 0xDB, 0x3E @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x7F
	m4a_note_key 0xDB, 0x47 @ N12
	m4a_wait 0x8C @ W12
	m4a_pan 0x02
	m4a_note_key 0xDB, 0x3E @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x04
	m4a_vol 0x25
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x31 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x06
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x32 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N12 (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x06
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xDB, 0x31, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x06
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x088B9508
	m4a_patt 0x088B9508
	m4a_voice 0x51
	m4a_vol 0x05
	m4a_mod 0x00
	m4a_tie_key_vel 0x34, 0x70 @ TIE
	m4a_wait 0x82 @ W02
	m4a_vol 0x06
	m4a_wait 0xA3 @ W56
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x07 @ VOL (running status)
	m4a_wait 0x94 @ W20
	m4a_running_cmd_u8 0x07 @ VOL (running status)
	m4a_wait 0x89 @ W09
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x32 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x4B @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x51 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x54 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x58 @ VOL (running status)
	m4a_wait 0x99 @ W28
	m4a_eot
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_CREDITS_07
SongTrack_MUS_CREDITS_07: @ 0x088B9570
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x05
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x7F
	m4a_vol 0x2B
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_vol 0x1E
	m4a_note_key_vel 0xE7, 0x43, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xE7, 0x43, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xE7, 0x43, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_running_note_key 0x40 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x40 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x45, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x44 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088B95B0
	m4a_note_key_vel 0xE7, 0x45, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_vol 0x0A
	m4a_note_key 0xEF, 0x42 @ N48
	m4a_wait 0x86 @ W06
	m4a_vol 0x0A
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0C @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0F @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x14 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x35 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_note_key 0xEF, 0x48 @ N48
	m4a_wait 0x83 @ W03
	m4a_vol 0x0B
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x10 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1B @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x30 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x38 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B9585
	m4a_patt 0x088B9592
	m4a_patt 0x088B959D
	m4a_note_key_vel 0xD5, 0x4C, 0x70 @ N06
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4E @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x51, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x50 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x51 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088B9622
	m4a_note_key_vel 0xE7, 0x51, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_wait 0xB0 @ W96
	m4a_vol 0x1F
	m4a_note_key 0xE7, 0x43 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x44 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4F @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4E @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x53 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x51 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_voice 0x50
	m4a_vol 0x29
	m4a_note_key 0xDB, 0x37 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x32 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x3B @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x36 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x32 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x36 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x37 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x34 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2F @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x3B @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x34 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x36 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x37 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x3C @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDB, 0x3B @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x36 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x37 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xDB, 0x36 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x32 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x36 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x32 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x36 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x36 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x32 @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x83 @ W03
	m4a_vol 0x2D
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x19 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x17 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x69
	m4a_vol 0x25
	m4a_mod 0x00
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x42 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_vol 0x25
	m4a_note_key 0xEB, 0x43 @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE9, 0x47 @ N30
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x92 @ W18
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x4A @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4E @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x4E, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4A, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x4A @ N18
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x47 @ N36
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x45 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEA, 0x4F @ N32
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE4, 0x48 @ N21
	m4a_wait 0x98 @ W24
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x4F @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x51 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x53 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x07
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x54 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x4F @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x4E @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x51 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xE7 @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x4E @ N18
	m4a_wait 0xB0 @ W96
	m4a_voice 0x56
	m4a_pan 0x40
	m4a_vol 0x32
	m4a_note_key 0xEA, 0x2B @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEA, 0x2A @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note_key 0xE7, 0x29 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x28 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x29 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x28 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x27 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x28 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x2D @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x30 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x2C @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x2F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x30 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x32 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x30, 0x60 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x2D, 0x6C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x2A, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x26 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEA, 0x2B @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEA, 0x2A @ N32
	m4a_wait 0x9C @ W36
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note_key 0xEB, 0x29 @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x28 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x29 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x2B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x2D @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x32 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x32 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x36 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x37 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x35 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x32 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x2B @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x2F @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_pan 0x40
	m4a_vol 0x22
	m4a_note_key 0xEB, 0x30 @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xEB, 0x2F @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xEB, 0x2E @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xEB, 0x2D @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xEB, 0x32 @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xEB, 0x31 @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xEF @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xEB, 0x2F @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key 0xEB, 0x37 @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xEB, 0x39, 0x70 @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x35 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_pend
	m4a_note_key 0xEB, 0x37 @ N36
	m4a_wait 0x9C @ W36
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x35 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_patt 0x088B9882
	m4a_patt 0x088B9882
	m4a_patt 0x088B9882
	m4a_voice 0x6D
	m4a_vol 0x07
	m4a_tie_key_vel 0x51, 0x70 @ TIE
	m4a_wait 0x82 @ W02
	m4a_vol 0x07
	m4a_wait 0x9C @ W36
	m4a_running_cmd_u8 0x07 @ VOL (running status)
	m4a_wait 0x9A @ W30
	m4a_running_cmd_u8 0x07 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x09 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x89 @ W09
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0B @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0A @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x0E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x2C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x31 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x43 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x48 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x4E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x52 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x57 @ VOL (running status)
	m4a_wait 0x98 @ W24
	m4a_eot
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_CREDITS_08
SongTrack_MUS_CREDITS_08: @ 0x088B98FB
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_pan 0x40
	m4a_vol 0x46
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xEF, 0x37, 0x60 @ N48
	m4a_wait 0xA0 @ W48
	m4a_running_note_key_vel 0x39, 0x70 @ N48 (running status)
	m4a_wait 0xB0 @ W96
	m4a_wait 0xAC @ W84
	m4a_note_key_vel 0xDB, 0x37, 0x4C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xEF, 0x39, 0x68 @ N48
	m4a_wait 0xB0 @ W96
	m4a_wait 0xAC @ W84
	m4a_note_key_vel 0xDB, 0x37, 0x50 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xEF, 0x39, 0x70 @ N48
	m4a_wait 0xB0 @ W96
	m4a_wait 0xAC @ W84
	m4a_note_key_vel 0xDB, 0x37, 0x4C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xEF, 0x39, 0x70 @ N48
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_note 0xEF @ N48
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xD5, 0x24 @ N06
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_CREDITS_09
SongTrack_MUS_CREDITS_09: @ 0x088B9965
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_lfos 0x2C
	m4a_xcmd_u8 0x08, 0x12 @ XIECV
	m4a_running_xcmd_u8 0x08, 0x10 @ XIECV (running status)
	m4a_bendr 0x0C
	m4a_pan 0x40
	m4a_vol 0x25
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_voice 0x06
	m4a_wait 0xA0 @ W48
	m4a_pan 0x40
	m4a_vol 0x15
	m4a_bend 0x41
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x4F, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x54, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xF6, 0x53, 0x70 @ N68
	m4a_wait 0x95 @ W21
	m4a_mod 0x05
	m4a_wait 0xA0 @ W48
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x51 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x53, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x55, 0x6C @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x70 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF7, 0x53 @ N72
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_wait 0xA0 @ W48
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x50, 0x60 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4F, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x4E @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key 0xF3, 0x4F @ N60
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_wait 0x9C @ W36
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x95 @ W21
	m4a_note_key 0xD2, 0x53 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xEB, 0x54 @ N36
	m4a_wait 0x98 @ W24
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x55, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xEE, 0x54, 0x70 @ N44
	m4a_wait 0x95 @ W21
	m4a_mod 0x05
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x53 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x56 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x57, 0x54 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x56, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x55, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x54, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x55 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key 0xF6, 0x54 @ N68
	m4a_wait 0x95 @ W21
	m4a_mod 0x05
	m4a_wait 0xA0 @ W48
	m4a_voice 0x4A
	m4a_vol 0x19
	m4a_mod 0x00
	m4a_wait 0x98 @ W24
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD2, 0x4A, 0x3C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4E, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x53, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x54, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x55 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xDB, 0x56, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x54 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD5, 0x53 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x53 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x52, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE9, 0x4A, 0x60 @ N30
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD2, 0x4A, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD5, 0x4A, 0x58 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x51, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x53, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x54, 0x64 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x56, 0x5C @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x55, 0x48 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x53, 0x6C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4F, 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x51, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE1, 0x53, 0x70 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x4F @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x4F, 0x5C @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD5, 0x4F, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4E, 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4E, 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEF, 0x4F @ N48
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xEB, 0x54, 0x6C @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x53, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xEB, 0x4C, 0x50 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD2, 0x4C, 0x4C @ N03
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x5C @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x53, 0x70 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x56 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x58 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD5, 0x51, 0x50 @ N06
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x58, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xDB, 0x5B @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x5A @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x58 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x56 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xE7, 0x56, 0x60 @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key_vel 0xD5, 0x53, 0x70 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x56 @ N18
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD3, 0x5B, 0x5C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5D, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5B, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x58, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x54, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x54, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x54, 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x53, 0x44 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_bend 0x40
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_voice 0x52
	m4a_pan 0x7F
	m4a_vol 0x1C
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xDB, 0x31, 0x70 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x06
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x2F @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x32 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x47 @ N12 (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x06
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x31 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x06
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x31 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x06
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xDB, 0x31 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x06
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0xB0 @ W96
	m4a_vol 0x19
	m4a_note_key 0xFF, 0x40 @ N96
	m4a_wait 0xA0 @ W48
	m4a_vol 0x32
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD2, 0x39 @ N03
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongTrack_MUS_CREDITS_10
SongTrack_MUS_CREDITS_10: @ 0x088B9BA1
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x01
	m4a_lfos 0x2C
	m4a_bendr 0x0C
	m4a_pan 0x2F
	m4a_vol 0x46
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xE4, 0x40, 0x40 @ N21
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x40, 0x60 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE4, 0x42, 0x5C @ N21
	m4a_wait 0x95 @ W21
	m4a_note_key_vel 0xE7, 0x42, 0x50 @ N24
	m4a_wait 0x98 @ W24
	m4a_wait 0x83 @ W03
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x3B, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3B @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_running_note_key_vel 0x3C, 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x37, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x36, 0x44 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x37, 0x50 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x37, 0x48 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x36, 0x44 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x37, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x3C, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xE7, 0x3E, 0x4C @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3C, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3C, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x42, 0x58 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x40, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x42, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE1, 0x36, 0x5C @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xED, 0x4E, 0x70 @ N42
	m4a_wait 0xA2 @ W54
	m4a_patt 0x088B9BC1
	m4a_note_key_vel 0xE7, 0x3C, 0x4C @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x58 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x37 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x36, 0x44 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x37, 0x5C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x4C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x37, 0x54 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x36, 0x44 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x37, 0x68 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_patt 0x088B9BEE
	m4a_patt 0x088B9BF9
	m4a_patt 0x088B9C07
	m4a_wait 0xB0 @ W96
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x3B, 0x5C @ N24
	m4a_wait 0xA0 @ W48
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x38 @ N24 (running status)
	m4a_wait 0xA0 @ W48
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N24 (running status)
	m4a_wait 0xA0 @ W48
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x42 @ N24 (running status)
	m4a_wait 0xA0 @ W48
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_patt 0x088B9C53
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x38, 0x5C @ N24
	m4a_wait 0xA0 @ W48
	m4a_running_note_key_vel 0x38, 0x78 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3C, 0x5C @ N24 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x3E @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3B, 0x70 @ N24 (running status)
	m4a_wait 0xA0 @ W48
	m4a_voice 0x30
	m4a_vol 0x29
	m4a_pan 0x59
	m4a_note_key 0xDB, 0x3E @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x43 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x42 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x43 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x3E @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key_vel 0xD2, 0x43, 0x64 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xE1, 0x43, 0x70 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xDB, 0x42 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x43 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3E @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x47 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE1, 0x47 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xE7, 0x46 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x3B @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE1, 0x40 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xE7, 0x3F @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x40 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x42 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x3C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x48 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x43 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x48 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xE1, 0x48 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xE7, 0x47 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x43 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x48 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_vol 0x0E
	m4a_note_key 0xFF, 0x3E @ N96
	m4a_wait 0x89 @ W09
	m4a_vol 0x0F
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x11 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x15 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x16 @ VOL (running status)
	m4a_wait 0x81 @ W01
	m4a_voice 0x30
	m4a_pan 0x69
	m4a_wait 0x82 @ W02
	m4a_vol 0x18
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1A @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x1F @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x21 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x25 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x28 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x9F @ W44
	m4a_wait 0x82 @ W02
	m4a_pan 0x59
	m4a_vol 0x22
	m4a_note 0xEB @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x3D @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x3B @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x37 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE7, 0x3B @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEB, 0x40 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x3F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x3B @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x39 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEF, 0x37 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x39 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xEB, 0x40 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x3F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE9, 0x3C @ N30
	m4a_wait 0x9C @ W36
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3F @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x42 @ N12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x40 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x42 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xDB, 0x45 @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x43 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE1, 0x42 @ N18
	m4a_wait 0x92 @ W18
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xE7 @ N24
	m4a_wait 0x9C @ W36
	m4a_note_key 0xD5, 0x47 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x48 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xE1, 0x4A @ N18
	m4a_wait 0xA8 @ W72
	m4a_voice 0x3C
	m4a_vol 0x40
	m4a_pan 0x40
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD5, 0x43 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x38
	m4a_pan 0x6D
	m4a_vol 0x22
	m4a_note_key 0xEA, 0x56 @ N32
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x92 @ W18
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xEA, 0x56, 0x70 @ N32
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x98 @ W24
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x60 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note 0xD3 @ N04
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xE7, 0x53, 0x70 @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x08
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xD2, 0x51 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_note_key 0xD5, 0x51 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4A @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_voice 0x01
	m4a_pan 0x57
	m4a_vol 0x29
	m4a_note_key 0xD2, 0x51 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x51 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x56 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x50 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x4B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x4C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x53 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x54 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x58 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD3, 0x5B, 0x60 @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5D, 0x68 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5B @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x5A, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x54, 0x68 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key_vel 0x56, 0x6C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD2, 0x51, 0x70 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x2E
	m4a_vol 0x35
	m4a_pan 0x18
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x5D
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_wait 0x83 @ W03
	m4a_pan 0x18
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x42 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x5D
	m4a_note_key 0xD2, 0x4A @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_wait 0x83 @ W03
	m4a_pan 0x1F
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD2, 0x59 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x30
	m4a_note_key 0xD2, 0x50 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x30
	m4a_note_key 0xD2, 0x4C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x50 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x61
	m4a_note_key 0xD2, 0x5F @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x5C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x3C
	m4a_pan 0x17
	m4a_vol 0x2C
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x51 @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD8, 0x53 @ N09
	m4a_wait 0x8C @ W12
	m4a_note_key 0xD1, 0x56 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD8 @ N09
	m4a_wait 0x8C @ W12
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_note 0xD1 @ N02
	m4a_wait 0x84 @ W04
	m4a_voice 0x2E
	m4a_pan 0x17
	m4a_vol 0x3E
	m4a_note_key 0xD2, 0x5B @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x59 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x67
	m4a_note_key 0xD2, 0x59 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x17
	m4a_note_key 0xD2, 0x56 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x53 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_pan 0x48
	m4a_note_key 0xD2, 0x53 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x47 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_voice 0x0E
	m4a_pan 0x60
	m4a_vol 0x3E
	m4a_note_key 0xEB, 0x4F @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xEF, 0x54 @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xD5, 0x4A @ N06
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x4F @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x53 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4F @ N24 (running status)
	m4a_wait 0x9C @ W36
	m4a_note 0xEB @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xEF, 0x52 @ N48
	m4a_wait 0xA4 @ W60
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x55 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x52 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x51 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x8C @ W12
	m4a_wait 0x8C @ W12
	m4a_note_key 0xE7, 0x51 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEB, 0x56 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xE7, 0x51 @ N24
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x9C @ W36
	m4a_running_note_key 0x55 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEB, 0x51 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xE7, 0x4F @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEB, 0x4A @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xE7, 0x4F @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x4A @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x30
	m4a_vol 0x31
	m4a_pan 0x23
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x3F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x43 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x42 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x47 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x43 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x3E @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x3B @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3B @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3E @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x40 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x3F @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x3D @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD2, 0x45 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note 0xD2 @ N03
	m4a_wait 0x86 @ W06
	m4a_note_key 0xD5, 0x44 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x40 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x49 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x44 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key 0x45 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_fine
	.globl SongHeader_MUS_CREDITS
SongHeader_MUS_CREDITS: @ 0x088BA044
	@ M4A song header: song 455 (MUS_CREDITS)
	m4a_song_header 10, 0, 0, 0xB2, VoiceGroup_JP_0861C79C
	.4byte SongTrack_MUS_CREDITS_01
	.4byte SongTrack_MUS_CREDITS_02
	.4byte SongTrack_MUS_CREDITS_03
	.4byte SongTrack_MUS_CREDITS_04
	.4byte SongTrack_MUS_CREDITS_05
	.4byte SongTrack_MUS_CREDITS_06
	.4byte SongTrack_MUS_CREDITS_07
	.4byte SongTrack_MUS_CREDITS_08
	.4byte SongTrack_MUS_CREDITS_09
	.4byte SongTrack_MUS_CREDITS_10

	.globl SongTrack_MUS_END_01
SongTrack_MUS_END_01: @ 0x088BA074
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x45
	m4a_voice 0x18
	m4a_pan 0x40
	m4a_vol 0x1E
	m4a_note_key_vel 0xD2, 0x48, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x3F, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x46, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_note_key_vel 0xD2, 0x4F, 0x70 @ N03
	m4a_wait 0x9E @ W42
	m4a_running_note_key_vel 0x46, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4B, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x42
	m4a_running_note_key_vel 0x51, 0x70 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3E
	m4a_wait 0x98 @ W24
	m4a_tempo 0x46
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x9E @ W42
	m4a_running_note_key_vel 0x4F, 0x34 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x52, 0x38 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x42
	m4a_running_note_key_vel 0x56, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x59, 0x70 @ N03 (running status)
	m4a_wait 0x95 @ W21
	m4a_tempo 0x3B
	m4a_wait 0x98 @ W24
	m4a_tempo 0x45
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x40
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3B
	m4a_wait 0x8C @ W12
	m4a_tempo 0x3A
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4A, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4D, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key_vel 0x51, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x56, 0x70 @ N03 (running status)
	m4a_wait 0x9F @ W44
	m4a_wait 0x81 @ W01
	m4a_tempo 0x40
	m4a_note_key 0xD0, 0x4D @ N01
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4F @ N01 (running status)
	m4a_wait 0x88 @ W08
	m4a_tempo 0x3D
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x50 @ N01 (running status)
	m4a_wait 0x84 @ W04
	m4a_tempo 0x36
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x45, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4A, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key_vel 0x51, 0x70 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x42
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3E
	m4a_wait 0x8C @ W12
	m4a_tempo 0x39
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4A, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_note_key_vel 0xD0, 0x54, 0x70 @ N01
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x56 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x52 @ N01 (running status)
	m4a_wait 0xA5 @ W64
	m4a_wait 0x89 @ W09
	m4a_note_key_vel 0xD2, 0x4D, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x52, 0x4C @ N03 (running status)
	m4a_wait 0x9A @ W30
	m4a_running_note_key_vel 0x4A, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4D, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x3D
	m4a_note_key_vel 0xD0, 0x52, 0x70 @ N01
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x51 @ N01 (running status)
	m4a_wait 0x88 @ W08
	m4a_tempo 0x32
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x52 @ N01 (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD2, 0x3F, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x46, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x46
	m4a_running_note_key_vel 0x4F, 0x70 @ N03 (running status)
	m4a_wait 0x9E @ W42
	m4a_running_note_key_vel 0x46, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4B, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x51, 0x70 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x9E @ W42
	m4a_running_note_key_vel 0x4F, 0x34 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x52, 0x38 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x40
	m4a_running_note_key_vel 0x57, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0x95 @ W21
	m4a_tempo 0x3D
	m4a_wait 0x8C @ W12
	m4a_tempo 0x38
	m4a_wait 0x8C @ W12
	m4a_tempo 0x45
	m4a_wait 0xB0 @ W96
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x42
	m4a_running_note_key 0x59 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3B
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4D, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x51, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key_vel 0x56, 0x4C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x59, 0x70 @ N03 (running status)
	m4a_wait 0x9F @ W44
	m4a_wait 0x81 @ W01
	m4a_note_key 0xD0, 0x56 @ N01
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x57 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x58 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD2, 0x59 @ N03
	m4a_wait 0x98 @ W24
	m4a_note_key 0xD0, 0x5C @ N01
	m4a_wait 0x98 @ W24
	m4a_tempo 0x41
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x5B @ N01 (running status)
	m4a_wait 0x88 @ W08
	m4a_tempo 0x3F
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x56 @ N01 (running status)
	m4a_wait 0x84 @ W04
	m4a_tempo 0x3D
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x4F, 0x44 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key_vel 0x59, 0x70 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3D
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_wait 0x95 @ W21
	m4a_tempo 0x3B
	m4a_wait 0x98 @ W24
	m4a_tempo 0x45
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x41
	m4a_running_note_key 0x59 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3C
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x3F, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x46, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key_vel 0x51, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x89 @ W09
	m4a_running_note_key_vel 0x4F, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x59, 0x70 @ N03 (running status)
	m4a_wait 0xA7 @ W68
	m4a_wait 0x81 @ W01
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x40
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3D
	m4a_wait 0x8C @ W12
	m4a_tempo 0x36
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4C, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4F @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key_vel 0x51, 0x70 @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4F, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x58 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x5B, 0x70 @ N03 (running status)
	m4a_wait 0xA8 @ W72
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x40
	m4a_note_key 0xD0, 0x5D @ N01
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x5B @ N01 (running status)
	m4a_wait 0x88 @ W08
	m4a_tempo 0x3D
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x58 @ N01 (running status)
	m4a_wait 0x8A @ W10
	m4a_note_key_vel 0xD2, 0x52, 0x3C @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x54, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_note_key_vel 0xD2, 0x59, 0x70 @ N03
	m4a_wait 0xB0 @ W96
	m4a_pend
	m4a_wait 0xAE @ W90
	m4a_running_note_key_vel 0x4D, 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x52, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x54, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x57, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x59, 0x70 @ N03 (running status)
	m4a_wait 0xAE @ W90
	m4a_wait 0xAC @ W84
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x46, 0x38 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4A, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4D @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x52, 0x70 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x9F @ W44
	m4a_wait 0x81 @ W01
	m4a_tempo 0x40
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3D
	m4a_wait 0x98 @ W24
	m4a_patt 0x088BA1FC
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD2, 0x56, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_tempo 0x40
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3B
	m4a_running_note_key 0x59 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x52, 0x38 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x56, 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key_vel 0x5E, 0x70 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x59 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x52, 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x42
	m4a_note_key_vel 0xD0, 0x57, 0x70 @ N01
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x59 @ N01 (running status)
	m4a_wait 0x88 @ W08
	m4a_tempo 0x40
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x56 @ N01 (running status)
	m4a_wait 0x84 @ W04
	m4a_tempo 0x3D
	m4a_wait 0x8C @ W12
	m4a_tempo 0x45
	m4a_note_key_vel 0xD2, 0x54, 0x70 @ N03
	m4a_wait 0xB0 @ W96
	m4a_pend
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x40
	m4a_wait 0x98 @ W24
	m4a_tempo 0x38
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_tempo 0x45
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x40
	m4a_wait 0x98 @ W24
	m4a_tempo 0x36
	m4a_wait 0x8F @ W15
	m4a_note_key_vel 0xD2, 0x48, 0x38 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4B, 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4D, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x54, 0x70 @ N03 (running status)
	m4a_wait 0x9F @ W44
	m4a_wait 0x81 @ W01
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0xA4 @ W60
	m4a_tempo 0x43
	m4a_wait 0x8C @ W12
	m4a_tempo 0x40
	m4a_wait 0x8C @ W12
	m4a_tempo 0x3F
	m4a_wait 0x8C @ W12
	m4a_tempo 0x45
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD2, 0x54, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3D
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3B
	m4a_wait 0x8C @ W12
	m4a_tempo 0x33
	m4a_running_note_key 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x4D, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x52, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x59, 0x70 @ N03 (running status)
	m4a_wait 0xAF @ W92
	m4a_wait 0x81 @ W01
	m4a_patt 0x088BA265
	m4a_tempo 0x45
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x3D
	m4a_wait 0x98 @ W24
	m4a_tempo 0x38
	m4a_wait 0x8C @ W12
	m4a_tempo 0x33
	m4a_wait 0x86 @ W06
	m4a_note_key_vel 0xD2, 0x4A, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4D, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key 0x52 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x56, 0x70 @ N03 (running status)
	m4a_wait 0x9F @ W44
	m4a_wait 0x81 @ W01
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x42
	m4a_wait 0x8C @ W12
	m4a_tempo 0x3F
	m4a_wait 0x8C @ W12
	m4a_patt 0x088BA1FC
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD2, 0x56, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_tempo 0x40
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3A
	m4a_running_note_key 0x59 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x56, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x59, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key_vel 0x5E, 0x70 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x59 @ N03 (running status)
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x51, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x54 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x40
	m4a_note_key_vel 0xD0, 0x57, 0x70 @ N01
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x59 @ N01 (running status)
	m4a_wait 0x88 @ W08
	m4a_tempo 0x3B
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x56 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_patt 0x088BA25E
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x3F
	m4a_wait 0x98 @ W24
	m4a_tempo 0x36
	m4a_wait 0x98 @ W24
	m4a_tempo 0x45
	m4a_wait 0xB0 @ W96
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x3B
	m4a_wait 0x98 @ W24
	m4a_tempo 0x36
	m4a_wait 0x8F @ W15
	m4a_note_key_vel 0xD2, 0x4B, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x4F, 0x48 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x51 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key_vel 0x54, 0x70 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x56 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x42
	m4a_wait 0x8C @ W12
	m4a_tempo 0x3D
	m4a_wait 0x8C @ W12
	m4a_tempo 0x45
	m4a_running_note_key 0x57 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x43
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3B
	m4a_wait 0x98 @ W24
	m4a_patt 0x088BA296
	m4a_note_key_vel 0xD2, 0x5D, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x5B @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3D
	m4a_running_note_key 0x5D @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x33
	m4a_wait 0x8C @ W12
	m4a_running_note_key 0x60 @ N03 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x56, 0x3C @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x59, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_tempo 0x45
	m4a_running_note_key_vel 0x5E, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x62, 0x70 @ N03 (running status)
	m4a_wait 0xAF @ W92
	m4a_wait 0x81 @ W01
	m4a_wait 0xA0 @ W48
	m4a_tempo 0x41
	m4a_wait 0x98 @ W24
	m4a_tempo 0x38
	m4a_wait 0x98 @ W24
	m4a_tempo 0x45
	m4a_wait 0xB0 @ W96
	m4a_wait 0x98 @ W24
	m4a_tempo 0x42
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x3B
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_tempo 0x33
	m4a_running_note_key 0x4A @ N03 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x3F, 0x40 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key_vel 0x46, 0x44 @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x83 @ W03
	m4a_goto 0x088BA08E
	m4a_fine
	.globl SongTrack_MUS_END_02
SongTrack_MUS_END_02: @ 0x088BA399
	@ M4A track start proven by song header pointer
	m4a_keysh 0x00
	m4a_voice 0x18
	m4a_pan 0x40
	m4a_vol 0x24
	m4a_note_key_vel 0xD2, 0x38, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x35 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD2, 0x33, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3A, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3A @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD2, 0x43, 0x44 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3A @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3A @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD2, 0x33, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3C, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD2, 0x45, 0x44 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD2, 0x32, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x39, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD2, 0x41, 0x44 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_running_note_key_vel 0x37, 0x70 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x36 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x35 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_running_note_key 0x34 @ N03 (running status)
	m4a_wait 0xA0 @ W48
	m4a_patt 0x088BA3A7
	m4a_patt 0x088BA3B3
	m4a_patt 0x088BA3BE
	m4a_patt 0x088BA3CA
	m4a_patt 0x088BA3D5
	m4a_patt 0x088BA3E1
	m4a_note_key_vel 0xD0, 0x43, 0x70 @ N01
	m4a_wait 0x9B @ W32
	m4a_running_note_key_vel 0x3E, 0x64 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x41, 0x70 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x3E, 0x64 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x3B, 0x70 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3E @ N01 (running status)
	m4a_wait 0x9B @ W32
	m4a_running_note_key_vel 0x37, 0x64 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x3B, 0x70 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x37, 0x64 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x35, 0x70 @ N01 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD2, 0x33 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3A, 0x48 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x43, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3A @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_patt 0x088BA3B3
	m4a_note_key_vel 0xD2, 0x34, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3A, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3A @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_patt 0x088BA3B3
	m4a_note_key_vel 0xD2, 0x35, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3A, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4B @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x48, 0x50 @ N03 (running status)
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xD2, 0x3A, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x41, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD2, 0x3A, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x43, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x43 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD2, 0x3A, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x45, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_running_note_key_vel 0x3A, 0x70 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x46, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD2, 0x35, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3C, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD2, 0x35, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3E, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD2, 0x35, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x3F, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x39 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_note_key_vel 0xD2, 0x35, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x41, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088BA4AE
	m4a_note_key_vel 0xD2, 0x35, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x41, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3F @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3C @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088BA4AE
	m4a_patt 0x088BA4CB
	m4a_patt 0x088BA468
	m4a_patt 0x088BA474
	m4a_patt 0x088BA480
	m4a_note_key_vel 0xD2, 0x3A, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x48, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_patt 0x088BA468
	m4a_patt 0x088BA474
	m4a_patt 0x088BA480
	m4a_note_key_vel 0xD2, 0x3A, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key_vel 0x46, 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x46 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_patt 0x088BA496
	m4a_patt 0x088BA4A2
	m4a_patt 0x088BA4AE
	m4a_patt 0x088BA4BA
	m4a_patt 0x088BA4AE
	m4a_patt 0x088BA4CB
	m4a_patt 0x088BA4AE
	m4a_patt 0x088BA4CB
	m4a_note_key_vel 0xD2, 0x46, 0x70 @ N03
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x44 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x41 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3E @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x3A @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x38 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x35 @ N03 (running status)
	m4a_wait 0x98 @ W24
	m4a_goto 0x088BA3A7
	m4a_fine
	m4a_running_note_key_vel_gate 0x00, 0x00, 0x00 @ N03 (running status)
