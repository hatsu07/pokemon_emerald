	@ src/data/script_menu.h:38 gText_Registry (+2 aliases)
	.globl gText_Registry
gText_Registry: @ 0x085CC622
	.string "とうろく{EOS}"
	.if (. - gText_Registry) > 0x5
	.error "gText_Registry may not grow beyond its original slot"
	.endif
	.if (. - gText_Registry) < 0x5
	.space 0x5 - (. - gText_Registry)
	.endif
	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_5CC627
gText_Rom_5CC627: @ 0x085CC627
	.string "とじる{EOS}"
	.if (. - gText_Rom_5CC627) > 0x4
	.error "gText_Rom_5CC627 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC627) < 0x4
	.space 0x4 - (. - gText_Rom_5CC627)
	.endif
	@ src/strings.c:728 gText_QuitChatting
	.globl gText_QuitChatting
gText_QuitChatting: @ 0x085CC62B
	.string "チャットを やめますか？{EOS}"
	.if (. - gText_QuitChatting) > 0xd
	.error "gText_QuitChatting may not grow beyond its original slot"
	.endif
	.if (. - gText_QuitChatting) < 0xd
	.space 0xd - (. - gText_QuitChatting)
	.endif
	@ Decoded text from ROM range: offset=0x5CC638, size=0xE
	.string "どこに　とうろくしますか？{EOS}"

	@ src/strings.c:730 gText_RegisterTextHere
	.globl gText_RegisterTextHere
gText_RegisterTextHere: @ 0x085CC646
	.string "ここに とうろくしますか?{EOS}"
	.if (. - gText_RegisterTextHere) > 0xe
	.error "gText_RegisterTextHere may not grow beyond its original slot"
	.endif
	.if (. - gText_RegisterTextHere) < 0xe
	.space 0xe - (. - gText_RegisterTextHere)
	.endif

	@ src/strings.c:731 gText_InputText
	.globl gText_Rom_5CC654
gText_Rom_5CC654: @ 0x085CC654
	.string "ことばを いれて ください!{EOS}"
	.if (. - gText_Rom_5CC654) > 0xf
	.error "gText_Rom_5CC654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC654) < 0xf
	.space 0xf - (. - gText_Rom_5CC654)
	.endif
	.globl gText_Rom_5CC663
gText_Rom_5CC663: @ 0x085CC663
	@ Decoded text from ROM range: offset=0x5CC663, size=0xF
	.string "{SE_M_HYPER_BEAM2}さんが　さんかしました！{EOS}"

	@ src/strings.c:733 gText_F700LeftChat
	.globl gText_F700LeftChat
gText_F700LeftChat: @ 0x085CC672
	.string "{DYNAMIC 0}さんが ぬけました{EOS}"
	.if (. - gText_F700LeftChat) > 0xc
	.error "gText_F700LeftChat may not grow beyond its original slot"
	.endif
	.if (. - gText_F700LeftChat) < 0xc
	.space 0xc - (. - gText_F700LeftChat)
	.endif
	@ analyzed canonical ROM range 0x085CC67E-0x085CC692
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF7, 0x00, 0x19, 0xF7, 0x01, 0x1B, 0x07, 0x22, 0xF0, 0xFF, 0xF7, 0x00, 0x19, 0xF7, 0x01, 0x1B
	.byte 0x07, 0x22, 0x1A, 0x00, 0x02
