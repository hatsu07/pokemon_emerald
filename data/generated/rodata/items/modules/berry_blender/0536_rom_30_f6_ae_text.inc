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
	@ Decoded text from ROM range: offset=0x30F6E2, size=0x19
	.string "カッコイ$"
	.string "カワイイ$"
	.string "ウツクシ$"
	.string "カシコイ$"
	.string "タクマシ$"
