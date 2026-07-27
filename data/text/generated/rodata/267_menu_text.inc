	@ src/data/script_menu.h:38 gText_Registry (+2 aliases)
	.globl gText_Rom_5CC622
gText_Rom_5CC622: @ 0x085CC622
	.string "とうろく$"
	.if (. - gText_Rom_5CC622) > 0x5
	.error "gText_Rom_5CC622 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC622) < 0x5
	.space 0x5 - (. - gText_Rom_5CC622)
	.endif

	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_5CC627
gText_Rom_5CC627: @ 0x085CC627
	.string "とじる$"
	.if (. - gText_Rom_5CC627) > 0x4
	.error "gText_Rom_5CC627 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC627) < 0x4
	.space 0x4 - (. - gText_Rom_5CC627)
	.endif

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
	.incbin "baserom.gba", 0x5cc638, 0xe

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
	.incbin "baserom.gba", 0x5cc663, 0xf
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
	.incbin "baserom.gba", 0x5cc67e, 0x15

