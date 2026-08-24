	@ data/maps/VictoryRoad_1F/scripts.inc:181 VictoryRoad_1F_Text_KatelynnPostBattle
	.globl VictoryRoad_1F_Text_KatelynnPostBattle
VictoryRoad_1F_Text_KatelynnPostBattle: @ 0x08219952
	.string "ふん…… いいわよ\nあなた から さきに いきなさいよ"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_KatelynnPostBattle) > 0x1c
	.error "VictoryRoad_1F_Text_KatelynnPostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_KatelynnPostBattle) < 0x1c
	.space 0x1c - (. - VictoryRoad_1F_Text_KatelynnPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x21996E, size 0x74
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x00, 0x51, 0x00, 0x00, 0x00
	.4byte VictoryRoad_B1F_Text_SamuelIntro @ ROM pointer 0x082199E2
	.4byte VictoryRoad_B1F_Text_SamuelDefeat @ ROM pointer 0x08219A0B
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte VictoryRoad_B1F_Text_SamuelPostBattle @ ROM pointer 0x08219A18
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x61, 0x00, 0x00, 0x00, 0x3A, 0x9A, 0x21, 0x08, 0x5F, 0x9A, 0x21
	.byte 0x08, 0x0F, 0x00
	.4byte VictoryRoad_B1F_Text_ShannonPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x62, 0x00, 0x00, 0x00
	.4byte VictoryRoad_B1F_Text_MichelleIntro @ ROM pointer 0x08219AA3
	.4byte VictoryRoad_B1F_Text_MichelleDefeat @ ROM pointer 0x08219AC4
	.byte 0x0F, 0x00
	.4byte VictoryRoad_B1F_Text_MichellePostBattle @ ROM pointer 0x08219ACD
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x1C, 0x02, 0x00, 0x00
	.4byte VictoryRoad_B1F_Text_MitchellIntro @ ROM pointer 0x08219AF4
	.4byte VictoryRoad_B1F_Text_MitchellDefeat @ ROM pointer 0x08219B09
	.byte 0x0F, 0x00, 0x1D, 0x9B, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x22, 0x02, 0x00, 0x00
	.4byte VictoryRoad_B1F_Text_HalleIntro @ ROM pointer 0x08219B48
	.4byte VictoryRoad_B1F_Text_HalleDefeat @ ROM pointer 0x08219B6A
	.byte 0x0F, 0x00, 0x71, 0x9B, 0x21, 0x08, 0x09, 0x06, 0x02
