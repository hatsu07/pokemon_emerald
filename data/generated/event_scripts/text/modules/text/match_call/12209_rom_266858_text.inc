	@ data/text/match_call.inc:217 MatchCall_PersonalizedText2
	.globl gText_Rom_266858
gText_Rom_266858: @ 0x08266858
	.string "{STR_VAR_1}です\nこんにちは\pいまね トレーナーに なりたてのコに\nあなたの ことを きかせて いたのよ!\lポケモンを たいせつに そだてている\lつよい トレーナーが いるのよって……\pみんなの あこがれに なるような\nすばらしい トレーナーに なってね!\lじゃあ また あいましょう!$"
	.if (. - gText_Rom_266858) > 0x8c
	.error "gText_Rom_266858 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266858) < 0x8c
	.space 0x8c - (. - gText_Rom_266858)
	.endif
