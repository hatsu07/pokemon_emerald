	@ data/maps/VictoryRoad_B1F/scripts.inc:38 VictoryRoad_B1F_Text_ShannonIntro (+1 aliases)
	.globl gText_Rom_219A3A
gText_Rom_219A3A: @ 0x08219A3A
	.string "ポケモンリーグで かちぬくには\nポケモンへの しんらいが ひつよう なの"
	.byte EOS
	.if (. - gText_Rom_219A3A) > 0x25
	.error "gText_Rom_219A3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A3A) < 0x25
	.space 0x25 - (. - gText_Rom_219A3A)
	.endif
