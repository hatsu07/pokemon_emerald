	@ data/maps/MauvilleCity_GameCorner/scripts.inc:659 MauvilleCity_GameCorner_Text_SendToYourHomePC (+1 aliases)
	.globl gText_Rom_5C9976
gText_Rom_5C9976: @ 0x085C9976
	.string "どうも ありがとう!\nじたくの パソコンに おくって おきますね!{EOS}"
	.if (. - gText_Rom_5C9976) > 0x22
	.error "gText_Rom_5C9976 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9976) < 0x22
	.space 0x22 - (. - gText_Rom_5C9976)
	.endif
