	@ data/maps/MossdeepCity/scripts.inc:336 MossdeepCity_Text_LifeNeedsSeaToLive
	.globl gText_Rom_1E1A2A
gText_Rom_1E1A2A: @ 0x081E1A2A
	.string "いのちの みなもとは うみから うまれて\nりくに あがって きた\pやくめを おえた いのちは\nつち となって だいちに かえって いく\pそして うみと だいちは\nいつでも つながって いる……\pそう この かいがんせんの ようにな{EOS}"
	.if (. - gText_Rom_1E1A2A) > 0x74
	.error "gText_Rom_1E1A2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1A2A) < 0x74
	.space 0x74 - (. - gText_Rom_1E1A2A)
	.endif
