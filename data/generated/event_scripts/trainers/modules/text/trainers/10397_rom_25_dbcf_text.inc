	@ data/text/trainers.inc:1694 Route117_Text_IsaacRematchDefeat (+1 aliases)
	.globl gText_Rom_25DBCF
gText_Rom_25DBCF: @ 0x0825DBCF
	.string "いい そだてかた してるね……\nきみには そだてやの さいのう あるかも{EOS}"
	.if (. - gText_Rom_25DBCF) > 0x25
	.error "gText_Rom_25DBCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DBCF) < 0x25
	.space 0x25 - (. - gText_Rom_25DBCF)
	.endif
