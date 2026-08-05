	@ data/text/match_call.inc:310 MatchCall_PersonalizedText33
	.globl gText_Rom_2678BA
gText_Rom_2678BA: @ 0x082678BA
	.string "うおーい!\n{STR_VAR_1}だぞーっ!\lきょうも ごうかいに\lつりを たのしんで いるぞーっ!\pうみ か かわ いがいに\nつりが できる ばしょって ないかーっ?\lどこでも つりが したくって\lうずうずするんだーっ!\pおっと つりいとが からまった!\nじゃ つりが できるところ\lさがしといてくれーっ! またなーっ!$"
	.if (. - gText_Rom_2678BA) > 0x99
	.error "gText_Rom_2678BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2678BA) < 0x99
	.space 0x99 - (. - gText_Rom_2678BA)
	.endif
