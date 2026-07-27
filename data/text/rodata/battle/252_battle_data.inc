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
	.incbin "baserom.gba", 0x5cb703, 0x1a

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
	.incbin "baserom.gba", 0x5cb721, 0x9

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
	.incbin "baserom.gba", 0x5cb72e, 0xf

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
	.incbin "baserom.gba", 0x5cb741, 0xa

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
	.incbin "baserom.gba", 0x5cb74f, 0xa

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
	.incbin "baserom.gba", 0x5cb75f, 0x9

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
	.incbin "baserom.gba", 0x5cb76c, 0x9

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
	.incbin "baserom.gba", 0x5cb779, 0x2

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
	.incbin "baserom.gba", 0x5cb77f, 0xb

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
	.incbin "baserom.gba", 0x5cb78e, 0xa

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
	.incbin "baserom.gba", 0x5cb79c, 0x2

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

