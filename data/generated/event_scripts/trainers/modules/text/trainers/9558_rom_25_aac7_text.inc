	@ data/text/trainers.inc:491 Route107_Text_RayPostBattle
	.globl gText_Rom_25AAC7
gText_Rom_25AAC7: @ 0x0825AAC7
	.string "シン『おれの ポケモン\nねえちゃんから もらって そだてた\lだいじな あいぼう なんだぜ!$"
	.if (. - gText_Rom_25AAC7) > 0x2e
	.error "gText_Rom_25AAC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AAC7) < 0x2e
	.space 0x2e - (. - gText_Rom_25AAC7)
	.endif
