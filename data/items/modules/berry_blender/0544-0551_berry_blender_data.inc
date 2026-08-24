	@ src/data/trainers.h:33929 trainers_line_33929
	.globl gText_Rom_30F722
gText_Rom_30F722: @ 0x0830F722
	.string "ヨシノリ{EOS}"
	.if (. - gText_Rom_30F722) > 0x5
	.error "gText_Rom_30F722 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F722) < 0x5
	.space 0x5 - (. - gText_Rom_30F722)
	.endif
	@ analyzed canonical ROM range 0x0830F727-0x0830F74C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xCA, 0xE3, 0xDF, 0xFF, 0x00, 0xA4, 0xCA, 0xE3, 0xDF, 0xFF
	.byte 0x00, 0xA5, 0xCA, 0xE3, 0xDF, 0xFF, 0x00, 0xA2, 0xCA, 0xFF, 0x00, 0xA3, 0xCA, 0xFF, 0x00, 0xA4
	.byte 0xCA, 0xFF, 0x00, 0xA5, 0xCA, 0xFF

	@ src/berry_blender.c:270 berry_blender_line_270
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_30F74D
gText_Rom_30F74D: @ 0x0830F74D
	.string " おじさん{EOS}"
	.if (. - gText_Rom_30F74D) != 0x6
	.error "gText_Rom_30F74D must retain its original byte length"
	.endif
	@ src/berry_blender.c:271 berry_blender_line_271
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_30F753
gText_Rom_30F753: @ 0x0830F753
	.string " おとこのこ{EOS}"
	.if (. - gText_Rom_30F753) != 0x7
	.error "gText_Rom_30F753 must retain its original byte length"
	.endif

	@ src/berry_blender.c:272 berry_blender_line_272 (+1 aliases)
	.globl gText_Rom_30F75A
gText_Rom_30F75A: @ 0x0830F75A
	.string "おんなのこ{EOS}"
	.if (. - gText_Rom_30F75A) > 0x6
	.error "gText_Rom_30F75A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F75A) < 0x6
	.space 0x6 - (. - gText_Rom_30F75A)
	.endif

	@ src/berry_blender.c:273 berry_blender_line_273
	.globl gText_Rom_30F760
gText_Rom_30F760: @ 0x0830F760
	.string "めいじん{EOS}"
	.if (. - gText_Rom_30F760) > 0x5
	.error "gText_Rom_30F760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F760) < 0x5
	.space 0x5 - (. - gText_Rom_30F760)
	.endif

	@ src/berry_blender.c:274 berry_blender_line_274
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_30F765
gText_Rom_30F765: @ 0x0830F765
	.string " おにいさん{EOS}"
	.if (. - gText_Rom_30F765) != 0x7
	.error "gText_Rom_30F765 must retain its original byte length"
	.endif
