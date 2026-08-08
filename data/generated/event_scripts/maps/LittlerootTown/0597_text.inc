	@ data/maps/LittlerootTown/scripts.inc:907 LittlerootTown_Text_OurNewHomeLetsGoInside
	.globl gText_Rom_1E42E6
gText_Rom_1E42E6: @ 0x081E42E6
	.string "ママ『{PLAYER} おつかれさま!\pながいあいだ トラックに ゆられて\nたいへん だったでしょ?\pここが ミシロタウンよ!\pどう? これが わたしたちの\nあたらしい おうち!\pちょっと こふうな かんじで\nすみやすそうな ところ でしょ?\pこんどは {PLAYER}の おへやも あるのよ!\nさあ なかに はいりましょ!$"
	.if (. - gText_Rom_1E42E6) > 0x97
	.error "gText_Rom_1E42E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E42E6) < 0x97
	.space 0x97 - (. - gText_Rom_1E42E6)
	.endif
