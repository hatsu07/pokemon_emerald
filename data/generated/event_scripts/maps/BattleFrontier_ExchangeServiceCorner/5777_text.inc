	@ data/maps/BattleFrontier_ExchangeServiceCorner/scripts.inc:389 BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant
	.globl gText_Rom_236620
gText_Rom_236620: @ 0x08236620
	.string "まかせといてって!\pあんたの ほしいもん だったら\nなんでも とって きたるよ!!"
	.byte EOS
	.if (. - gText_Rom_236620) > 0x2a
	.error "gText_Rom_236620 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236620) < 0x2a
	.space 0x2a - (. - gText_Rom_236620)
	.endif
