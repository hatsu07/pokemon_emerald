	@ data/text/save.inc:10 gText_SavingDontTurnOff (+2 aliases)
	.globl gText_Rom_277071
gText_Rom_277071: @ 0x08277071
	.string "ポケモンレポートに かきこんでいます\nでんげんを きらないで ください{EOS}"
	.if (. - gText_Rom_277071) > 0x24
	.error "gText_Rom_277071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_277071) < 0x24
	.space 0x24 - (. - gText_Rom_277071)
	.endif
	.include "data/text/events/birch_speech.inc"
