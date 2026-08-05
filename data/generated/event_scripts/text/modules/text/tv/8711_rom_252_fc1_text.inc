	@ data/text/tv.inc:1180 GabbyAndTy_Text_QuoteFromLastInterview
	.globl gText_Rom_252FC1
gText_Rom_252FC1: @ 0x08252FC1
	.string "マリ『「{STR_VAR_1}!」\pおぼえてる? まえに たたかった とき\nあなたが いった きめゼリフよ\pわたしたち ちゃーんと\nおぼえてるん だからね!"
	.byte EOS
	.if (. - gText_Rom_252FC1) > 0x46
	.error "gText_Rom_252FC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252FC1) < 0x46
	.space 0x46 - (. - gText_Rom_252FC1)
	.endif
