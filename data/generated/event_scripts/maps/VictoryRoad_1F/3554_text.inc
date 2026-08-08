	@ data/maps/VictoryRoad_1F/scripts.inc:175 VictoryRoad_1F_Text_KatelynnIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_219928
gText_Rom_219928: @ 0x08219928
	.string "ここまで きた ひとに\nなにも いうことは ない…… いくわよ!"
	.byte EOS
	.if (. - gText_Rom_219928) != 0x21
	.error "gText_Rom_219928 must retain its original byte length"
	.endif
