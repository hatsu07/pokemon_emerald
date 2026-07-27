	@ src/berry_blender.c:264 sText_BerryBlenderStart
	.globl gText_Rom_30F6AE
gText_Rom_30F6AE: @ 0x0830F6AE
	.string "きのみブレンダーを きどうします\pバッグから きのみブレンダーに いれる\nきのみを えらんでください\p$"
	.if (. - gText_Rom_30F6AE) > 0x34
	.error "gText_Rom_30F6AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F6AE) < 0x34
	.space 0x34 - (. - gText_Rom_30F6AE)
	.endif
	.incbin "baserom.gba", 0x30f6e2, 0x19
	.globl gUnknown_830F6FB
gUnknown_830F6FB: @ 0x0830F6FB
	.incbin "baserom.gba", 0x30f6fb, 0x2
	.globl gUnknown_830F6FD
gUnknown_830F6FD: @ 0x0830F6FD

	@ src/berry_blender.c:266 sText_WasMade
	.globl gText_Rom_30F6FD
gText_Rom_30F6FD: @ 0x0830F6FD
	.string " ができた！$"
	.if (. - gText_Rom_30F6FD) > 0x7
	.error "gText_Rom_30F6FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F6FD) < 0x7
	.space 0x7 - (. - gText_Rom_30F6FD)
	.endif
	.incbin "baserom.gba", 0x30f704, 0x1e

