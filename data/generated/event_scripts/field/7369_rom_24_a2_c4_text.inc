	@ field-script:0x24968F FieldScriptText_24A2C4
	.globl gText_Rom_24A2C4
gText_Rom_24A2C4: @ 0x0824A2C4
	.string "さあ！\nいま　とうひょうが　おわりました！\lしゅうけいを　している　あいだに\l2じ　しんさに　うつりましょう！\p2じ　しんさは　いよいよ\nおまちかねの　アピールタイム！\lわざで　アピール　しまくりましょうー！\pでは　はりきって　どうぞ！\nレッツ！　アピール！{EOS}"
	.if (. - gText_Rom_24A2C4) > 0x82
	.error "gText_Rom_24A2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A2C4) < 0x82
	.space 0x82 - (. - gText_Rom_24A2C4)
	.endif
