	@ data/text/berries.inc:142 Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries
	.globl gText_Rom_263CD9
gText_Rom_263CD9: @ 0x08263CD9
	.string "あなたの なまえは……\p{PLAYER}{KUN}ね!\nとっても いい なまえだね!\l{PLAYER}{KUN} きのみのこと しりたい?$"
	.if (. - gText_Rom_263CD9) > 0x34
	.error "gText_Rom_263CD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263CD9) < 0x34
	.space 0x34 - (. - gText_Rom_263CD9)
	.endif
