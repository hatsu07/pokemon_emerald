	@ data/maps/Route110/scripts.inc:774 Route110_Text_MayExplainItemfinder
	.globl gText_Rom_1E9851
gText_Rom_1E9851: @ 0x081E9851
	.string "ハルカ『それは ダウジングマシン!\pダウジングマシンを つかうと\nめには みえなくても おちている\lどうぐが あると はんのう して\lおとで おしえて くれるのよ!\pじゃあ {PLAYER}{KUN}\nまた どこかで あおうね!\pまけた あたしが いうのも なんだけど\nそのときまでに もっと ポケモン\lそだてて おいた ほうが いいかもよ!$"
	.if (. - gText_Rom_1E9851) > 0xa3
	.error "gText_Rom_1E9851 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9851) < 0xa3
	.space 0xa3 - (. - gText_Rom_1E9851)
	.endif
