	@ data/maps/VictoryRoad_1F/scripts.inc:178 VictoryRoad_1F_Text_KatelynnDefeat (+1 aliases)
	.globl gText_Rom_219949
gText_Rom_219949: @ 0x08219949
	.string "くやしいわ……!"
	.byte EOS
	.if (. - gText_Rom_219949) > 0x9
	.error "gText_Rom_219949 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219949) < 0x9
	.space 0x9 - (. - gText_Rom_219949)
	.endif
