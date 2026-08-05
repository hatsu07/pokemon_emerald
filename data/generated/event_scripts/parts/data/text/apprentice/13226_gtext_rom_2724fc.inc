	@ data/text/apprentice.inc:757 gText_ApprenticeWhichMove14
	.globl gText_Rom_2724FC
gText_Rom_2724FC: @ 0x082724FC
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lまた…… そうだん させて くれよ\pは はずかしながらさ\nポケモンに おしえる わざがさ\lきまんないんだ アドバイス くれよ!\pポケモンは {STR_VAR_1}なんだ\nだったら どっちが いい かな……?\n{STR_VAR_2}…… {STR_VAR_3}……$"
	.if (. - gText_Rom_2724FC) > 0x92
	.error "gText_Rom_2724FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2724FC) < 0x92
	.space 0x92 - (. - gText_Rom_2724FC)
	.endif
