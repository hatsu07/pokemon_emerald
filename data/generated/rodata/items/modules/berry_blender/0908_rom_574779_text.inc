	@ src/berry_blender.c:310 sText_TheLevelIs (+1 aliases)
	.globl gText_Rom_574779
gText_Rom_574779: @ 0x08574779
	.string "レベル{EOS}"
	.if (. - gText_Rom_574779) > 0x4
	.error "gText_Rom_574779 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574779) < 0x4
	.space 0x4 - (. - gText_Rom_574779)
	.endif
	@ Decoded text from ROM range: offset=0x57477D, size=0x3
	.string "あか{EOS}"

