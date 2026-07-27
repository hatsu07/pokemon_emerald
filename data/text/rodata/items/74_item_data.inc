	@ src/berry_blender.c:270 berry_blender_line_270
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_30F74D
gText_Rom_30F74D: @ 0x0830F74D
	.string " おじさん$"
	.if (. - gText_Rom_30F74D) != 0x6
	.error "gText_Rom_30F74D must retain its original byte length"
	.endif
	.globl gUnknown_830F74E
	.set gUnknown_830F74E, gText_Rom_30F74D + 0x1
	.globl gText_Rom_30F74E
	.set gText_Rom_30F74E, gText_Rom_30F74D + 0x1

	@ src/berry_blender.c:271 berry_blender_line_271
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_30F753
gText_Rom_30F753: @ 0x0830F753
	.string " おとこのこ$"
	.if (. - gText_Rom_30F753) != 0x7
	.error "gText_Rom_30F753 must retain its original byte length"
	.endif
	.globl gText_Rom_30F754
	.set gText_Rom_30F754, gText_Rom_30F753 + 0x1

	@ src/berry_blender.c:272 berry_blender_line_272 (+1 aliases)
	.globl gText_Rom_30F75A
gText_Rom_30F75A: @ 0x0830F75A
	.string "おんなのこ$"
	.if (. - gText_Rom_30F75A) > 0x6
	.error "gText_Rom_30F75A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F75A) < 0x6
	.space 0x6 - (. - gText_Rom_30F75A)
	.endif
	.globl gUnknown_830F760
gUnknown_830F760: @ 0x0830F760

	@ src/berry_blender.c:273 berry_blender_line_273
	.globl gText_Rom_30F760
gText_Rom_30F760: @ 0x0830F760
	.string "めいじん$"
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
	.string " おにいさん$"
	.if (. - gText_Rom_30F765) != 0x7
	.error "gText_Rom_30F765 must retain its original byte length"
	.endif
	.globl gUnknown_830F766
	.set gUnknown_830F766, gText_Rom_30F765 + 0x1
	.globl gText_Rom_30F766
	.set gText_Rom_30F766, gText_Rom_30F765 + 0x1
	.globl gUnknown_830F76C
gUnknown_830F76C: @ 0x0830F76C

	@ src/berry_blender.c:275 berry_blender_line_275 (+1 aliases)
	.globl gText_Rom_30F76C
gText_Rom_30F76C: @ 0x0830F76C
	.string "おばさん$"
	.if (. - gText_Rom_30F76C) > 0x5
	.error "gText_Rom_30F76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F76C) < 0x5
	.space 0x5 - (. - gText_Rom_30F76C)
	.endif
	.incbin "baserom.gba", 0x30f771, 0xb

