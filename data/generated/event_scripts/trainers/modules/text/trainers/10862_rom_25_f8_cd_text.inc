	@ data/text/trainers.inc:2375 Route121_Text_MylesPostBattle
	.globl gText_Rom_25F8CD
gText_Rom_25F8CD: @ 0x0825F8CD
	.string "いいなーー! きみの ポケモン!\nどうやって そだてているの?$"
	.if (. - gText_Rom_25F8CD) > 0x20
	.error "gText_Rom_25F8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F8CD) < 0x20
	.space 0x20 - (. - gText_Rom_25F8CD)
	.endif
