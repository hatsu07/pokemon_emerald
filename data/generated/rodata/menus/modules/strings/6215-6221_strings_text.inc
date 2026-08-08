	@ src/strings.c:728 gText_QuitChatting
	.globl gText_Rom_5CC62B
gText_Rom_5CC62B: @ 0x085CC62B
	.string "チャットを やめますか？$"
	.if (. - gText_Rom_5CC62B) > 0xd
	.error "gText_Rom_5CC62B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC62B) < 0xd
	.space 0xd - (. - gText_Rom_5CC62B)
	.endif
	@ Decoded text from ROM range: offset=0x5CC638, size=0xE
	.string "どこに　とうろくしますか？$"

	@ src/strings.c:730 gText_RegisterTextHere
	.globl gText_Rom_5CC646
gText_Rom_5CC646: @ 0x085CC646
	.string "ここに とうろくしますか?$"
	.if (. - gText_Rom_5CC646) > 0xe
	.error "gText_Rom_5CC646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC646) < 0xe
	.space 0xe - (. - gText_Rom_5CC646)
	.endif

	@ src/strings.c:731 gText_InputText
	.globl gText_Rom_5CC654
gText_Rom_5CC654: @ 0x085CC654
	.string "ことばを いれて ください!$"
	.if (. - gText_Rom_5CC654) > 0xf
	.error "gText_Rom_5CC654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC654) < 0xf
	.space 0xf - (. - gText_Rom_5CC654)
	.endif
	.globl gUnknown_85CC663
gUnknown_85CC663: @ 0x085CC663
	@ Decoded text from ROM range: offset=0x5CC663, size=0xF
	.string "{SE_M_HYPER_BEAM2}さんが　さんかしました！$"
	.globl gUnknown_85CC672
gUnknown_85CC672: @ 0x085CC672

	@ src/strings.c:733 gText_F700LeftChat
	.globl gText_Rom_5CC672
gText_Rom_5CC672: @ 0x085CC672
	.string "{DYNAMIC 0}さんが ぬけました$"
	.if (. - gText_Rom_5CC672) > 0xc
	.error "gText_Rom_5CC672 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC672) < 0xc
	.space 0xc - (. - gText_Rom_5CC672)
	.endif
	@ Replaced baserom.gba range: offset=0x5CC67E, size=0x15
	.byte 0xF7, 0x00, 0x19, 0xF7, 0x01, 0x1B, 0x07, 0x22, 0xF0, 0xFF, 0xF7, 0x00, 0x19, 0xF7, 0x01, 0x1B
	.byte 0x07, 0x22, 0x1A, 0x00, 0x02

