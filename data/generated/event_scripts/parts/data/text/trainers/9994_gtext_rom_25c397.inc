	@ data/text/trainers.inc:1109 Route112_Text_TrentRegister
	.globl gText_Rom_25C397
gText_Rom_25C397: @ 0x0825C397
	.string "つった あしが いたい……\nちょっと オレの リュックから\lほうたいを だしてくれ\pって ちがうよ それは ポケナビだろ!\nもういいよ とうろく するから$"
	.if (. - gText_Rom_25C397) > 0x4e
	.error "gText_Rom_25C397 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C397) < 0x4e
	.space 0x4e - (. - gText_Rom_25C397)
	.endif
