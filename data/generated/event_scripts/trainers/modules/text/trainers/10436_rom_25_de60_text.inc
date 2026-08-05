	@ data/text/trainers.inc:1751 Route117_Text_MariaRegister
	.globl gText_Rom_25DE60
gText_Rom_25DE60: @ 0x0825DE60
	.string "あなたは れんしゅう してる?\nよかったら わたしが あいてになるわ!$"
	.if (. - gText_Rom_25DE60) > 0x24
	.error "gText_Rom_25DE60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DE60) < 0x24
	.space 0x24 - (. - gText_Rom_25DE60)
	.endif
