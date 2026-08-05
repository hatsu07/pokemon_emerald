	@ data/text/match_call.inc:322 MatchCall_PersonalizedText37
	.globl gText_Rom_267B96
gText_Rom_267B96: @ 0x08267B96
	.string "こんにちは {STR_VAR_1}よ\nじきゅうりょく を つけるには\lやっぱり たかい ところが いいわね!\pやまの てっぺん とかで\nはしり まわると\lすぐに いきが きれるのよ!\pああ わたしも いきが きれそう\nじゃあ またね!$"
	.if (. - gText_Rom_267B96) > 0x6d
	.error "gText_Rom_267B96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267B96) < 0x6d
	.space 0x6d - (. - gText_Rom_267B96)
	.endif
