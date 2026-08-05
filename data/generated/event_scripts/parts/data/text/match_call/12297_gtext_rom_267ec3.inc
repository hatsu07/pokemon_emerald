	@ data/text/match_call.inc:346 MatchCall_PersonalizedText45
	.globl gText_Rom_267EC3
gText_Rom_267EC3: @ 0x08267EC3
	.string "こんにちは {STR_VAR_1}です\nかざんばい いつになったら\lおさまるの かしら\pあんまり つもっちゃうと\nパラソルの がらが\lみえなく なっちゃうのに……\pそれでは また\nおあい しましょう$"
	.if (. - gText_Rom_267EC3) > 0x5b
	.error "gText_Rom_267EC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267EC3) < 0x5b
	.space 0x5b - (. - gText_Rom_267EC3)
	.endif
