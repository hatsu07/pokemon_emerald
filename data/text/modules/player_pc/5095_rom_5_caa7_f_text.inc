	@ src/player_pc.c:193 player_pc_line_193
	.globl sScriptMenuText_Decoration2
sScriptMenuText_Decoration2: @ 0x085CAA7F
	.string "もようがえ{EOS}"
	.if (. - sScriptMenuText_Decoration2) > 0x6
	.error "sScriptMenuText_Decoration2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Decoration2) < 0x6
	.space 0x6 - (. - sScriptMenuText_Decoration2)
	.endif
	@ analyzed canonical ROM range 0x085CAA85-0x085CAA9C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x1B, 0x50, 0x0A, 0x0C, 0xFF, 0x56, 0x53, 0x7E, 0x64, 0xFF, 0x14, 0x03, 0x2B, 0x08, 0x00, 0x78
	.byte 0x5D, 0x64, 0xFF, 0x14, 0x03, 0x2B, 0x08, 0x00
