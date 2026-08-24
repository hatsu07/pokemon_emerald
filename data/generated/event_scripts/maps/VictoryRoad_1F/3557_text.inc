	@ data/maps/VictoryRoad_1F/scripts.inc:175 VictoryRoad_1F_Text_KatelynnIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_219928
gText_Rom_219928: @ 0x08219928
	.string "ここまで きた ひとに\nなにも いうことは ない…… いくわよ!"
	.byte EOS
	.if (. - gText_Rom_219928) != 0x21
	.error "gText_Rom_219928 must retain its original byte length"
	.endif
	.globl gText_Rom_219945
	.set gText_Rom_219945, gText_Rom_219928 + 0x1d
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
