	@ data/text/match_call.inc:253 MatchCall_PersonalizedText14
	.globl gText_Rom_266E1A
gText_Rom_266E1A: @ 0x08266E1A
	.string "あ {STR_VAR_1}です!\nそろそろ すてられぶね にも\lあきて きちゃった のよね\pでも せっかく だから\nいちどは キミに かって みたいし\lとうぶんは ここで さんぽ してるわ\lきが むいたら あいに きてよね!\pよし きょうは ついに\nとなりの へやの おじさんに\lしょうぶを いどんで みようかな?\pではね!$"
	.if (. - gText_Rom_266E1A) > 0x9a
	.error "gText_Rom_266E1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266E1A) < 0x9a
	.space 0x9a - (. - gText_Rom_266E1A)
	.endif
