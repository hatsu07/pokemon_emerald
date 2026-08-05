	@ src/data/easy_chat/easy_chat_group_battle.h:136 easy_chat_group_battle_line_136 (+1 aliases)
	.globl gText_Rom_5CB6EC
gText_Rom_5CB6EC: @ 0x085CB6EC
	.string "さくせん$"
	.if (. - gText_Rom_5CB6EC) > 0x5
	.error "gText_Rom_5CB6EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6EC) < 0x5
	.space 0x5 - (. - gText_Rom_5CB6EC)
	.endif

	@ src/pokenav_list.c:100 gText_PokenavMatchCall_TrainerPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB6F1
gText_Rom_5CB6F1: @ 0x085CB6F1
	.string "もってる ポケモン$"
	.if (. - gText_Rom_5CB6F1) != 0xa
	.error "gText_Rom_5CB6F1 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB6F6
	.set gText_Rom_5CB6F6, gText_Rom_5CB6F1 + 0x5

	@ src/pokenav_list.c:101 gText_PokenavMatchCall_SelfIntroduction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB6FB
gText_Rom_5CB6FB: @ 0x085CB6FB
	.string "じこしょうかい$"
	.if (. - gText_Rom_5CB6FB) != 0x8
	.error "gText_Rom_5CB6FB must retain its original byte length"
	.endif
	.globl gText_Rom_5CB6FD
	.set gText_Rom_5CB6FD, gText_Rom_5CB6FB + 0x2
	@ Replaced baserom.gba range: offset=0x5CB703, size=0x1A
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0xF8, 0x00, 0x06, 0x08, 0x41, 0x02, 0x00, 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB71D
gText_Rom_5CB71D: @ 0x085CB71D
	.string "もどる$"
	.if (. - gText_Rom_5CB71D) > 0x4
	.error "gText_Rom_5CB71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB71D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB71D)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB721, size=0x9
	.byte 0xF8, 0x00, 0x3F, 0x2E, 0x10, 0x02, 0x00, 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB72A
gText_Rom_5CB72A: @ 0x085CB72A
	.string "もどる$"
	.if (. - gText_Rom_5CB72A) > 0x4
	.error "gText_Rom_5CB72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB72A) < 0x4
	.space 0x4 - (. - gText_Rom_5CB72A)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB72E, size=0xF
	.byte 0xF8, 0x00, 0x5A, 0x7E, 0x94, 0x80, 0x5C, 0x86, 0x7E, 0x2D, 0x20, 0x29, 0x00, 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB73D
gText_Rom_5CB73D: @ 0x085CB73D
	.string "もどる$"
	.if (. - gText_Rom_5CB73D) > 0x4
	.error "gText_Rom_5CB73D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB73D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB73D)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB741, size=0xA
	.byte 0xF8, 0x00, 0x6F, 0xAE, 0x57, 0x7E, 0x89, 0x00, 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB74B
gText_Rom_5CB74B: @ 0x085CB74B
	.string "もどる$"
	.if (. - gText_Rom_5CB74B) > 0x4
	.error "gText_Rom_5CB74B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB74B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB74B)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB74F, size=0xA
	.byte 0xF8, 0x00, 0x6F, 0xAE, 0x58, 0x2D, 0x04, 0x27, 0x48, 0x00

	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB759
gText_Rom_5CB759: @ 0x085CB759
	.string "{B_BUTTON}やめる$"
	.if (. - gText_Rom_5CB759) != 0x6
	.error "gText_Rom_5CB759 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB75B
	.set gText_Rom_5CB75B, gText_Rom_5CB759 + 0x2
	@ Replaced baserom.gba range: offset=0x5CB75F, size=0x9
	.byte 0xF8, 0x00, 0x72, 0x66, 0x85, 0xAE, 0x00, 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB768
gText_Rom_5CB768: @ 0x085CB768
	.string "もどる$"
	.if (. - gText_Rom_5CB768) > 0x4
	.error "gText_Rom_5CB768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB768) < 0x4
	.space 0x4 - (. - gText_Rom_5CB768)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB76C, size=0x9
	.byte 0xF8, 0x00, 0x09, 0x50, 0x13, 0x02, 0x00, 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB775
gText_Rom_5CB775: @ 0x085CB775
	.string "もどる$"
	.if (. - gText_Rom_5CB775) > 0x4
	.error "gText_Rom_5CB775 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB775) < 0x4
	.space 0x4 - (. - gText_Rom_5CB775)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB779, size=0x2
	.byte 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB77B
gText_Rom_5CB77B: @ 0x085CB77B
	.string "もどる$"
	.if (. - gText_Rom_5CB77B) > 0x4
	.error "gText_Rom_5CB77B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB77B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB77B)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB77F, size=0xB
	.byte 0xF8, 0x00, 0x78, 0x9A, 0x7E, 0x2D, 0x20, 0x29, 0x00, 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB78A
gText_Rom_5CB78A: @ 0x085CB78A
	.string "もどる$"
	.if (. - gText_Rom_5CB78A) > 0x4
	.error "gText_Rom_5CB78A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB78A) < 0x4
	.space 0x4 - (. - gText_Rom_5CB78A)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB78E, size=0xA
	.byte 0xF8, 0x00, 0x0C, 0x36, 0x03, 0x0B, 0x02, 0x00, 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB798
gText_Rom_5CB798: @ 0x085CB798
	.string "もどる$"
	.if (. - gText_Rom_5CB798) > 0x4
	.error "gText_Rom_5CB798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB798) < 0x4
	.space 0x4 - (. - gText_Rom_5CB798)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB79C, size=0x2
	.byte 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB79E
gText_Rom_5CB79E: @ 0x085CB79E
	.string "もどる$"
	.if (. - gText_Rom_5CB79E) > 0x4
	.error "gText_Rom_5CB79E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB79E) < 0x4
	.space 0x4 - (. - gText_Rom_5CB79E)
	.endif
	.globl gUnknown_85CB7A2
gUnknown_85CB7A2: @ 0x085CB7A2

