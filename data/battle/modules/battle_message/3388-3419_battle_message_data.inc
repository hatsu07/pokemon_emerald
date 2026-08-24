	@ src/battle_message.c:115 sText_YourFoesWeakGetEmPkmn
	.globl sText_YourFoesWeakGetEmPkmn
sText_YourFoesWeakGetEmPkmn: @ 0x085AAF76
	.string "あいてが よわっている!\nチャンスだ！ {B_BUFF1}！{EOS}"
	.if (. - sText_YourFoesWeakGetEmPkmn) > 0x18
	.error "sText_YourFoesWeakGetEmPkmn may not grow beyond its original slot"
	.endif
	.if (. - sText_YourFoesWeakGetEmPkmn) < 0x18
	.space 0x18 - (. - sText_YourFoesWeakGetEmPkmn)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AAF8E: battle_message.s: BufferStringBattle
	.globl sText_LinkPartnerSentOutPkmnGoPkmn
sText_LinkPartnerSentOutPkmnGoPkmn: @ 0x085AAF8E
	@ canonical pret/pokeemerald semantic role: sText_LinkPartnerSentOutPkmnGoPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x1F, 0x1A, 0x00, 0xFD, 0x0B, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFE, 0x25
	.byte 0x09, 0x50, 0xAB, 0x00, 0xFD, 0x09, 0xAB, 0xFF

	@ src/battle_message.c:123 sText_PkmnThatsEnough
	.globl sText_PkmnThatsEnough
sText_PkmnThatsEnough: @ 0x085AAFA6
	.string "{B_BUFF1} もういい！\nもどれ！{EOS}"
	.if (. - sText_PkmnThatsEnough) > 0xe
	.error "sText_PkmnThatsEnough may not grow beyond its original slot"
	.endif
	.if (. - sText_PkmnThatsEnough) < 0xe
	.space 0xe - (. - sText_PkmnThatsEnough)
	.endif

	@ src/battle_message.c:124 sText_PkmnComeBack
	.globl sText_PkmnComeBack
sText_PkmnComeBack: @ 0x085AAFB4
	.string "{B_BUFF1}\nもどれ！{EOS}"
	.if (. - sText_PkmnComeBack) > 0x8
	.error "sText_PkmnComeBack may not grow beyond its original slot"
	.endif
	.if (. - sText_PkmnComeBack) < 0x8
	.space 0x8 - (. - sText_PkmnComeBack)
	.endif

	@ src/battle_message.c:125 sText_PkmnOkComeBack
	.globl sText_PkmnOkComeBack
sText_PkmnOkComeBack: @ 0x085AAFBC
	.string "{B_BUFF1} いいぞ！\nもどれ！{EOS}"
	.if (. - sText_PkmnOkComeBack) > 0xd
	.error "sText_PkmnOkComeBack may not grow beyond its original slot"
	.endif
	.if (. - sText_PkmnOkComeBack) < 0xd
	.space 0xd - (. - sText_PkmnOkComeBack)
	.endif

	@ src/battle_message.c:126 sText_PkmnGoodComeBack
	.globl sText_PkmnGoodComeBack
sText_PkmnGoodComeBack: @ 0x085AAFC9
	.string "{B_BUFF1} よくやった！\nもどれ！{EOS}"
	.if (. - sText_PkmnGoodComeBack) > 0xf
	.error "sText_PkmnGoodComeBack may not grow beyond its original slot"
	.endif
	.if (. - sText_PkmnGoodComeBack) < 0xf
	.space 0xf - (. - sText_PkmnGoodComeBack)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AAFD8: battle_message.s: BufferStringBattle
	.globl sText_Trainer1WithdrewPkmn
sText_Trainer1WithdrewPkmn: @ 0x085AAFD8
	@ canonical pret/pokeemerald semantic role: sText_Trainer1WithdrewPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x1B, 0x50, 0x0A, 0x22
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAFEB: battle_message.s: BufferStringBattle
	.globl sText_LinkTrainer1WithdrewPkmn
sText_LinkTrainer1WithdrewPkmn: @ 0x085AAFEB
	@ canonical pret/pokeemerald semantic role: sText_LinkTrainer1WithdrewPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x20, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x1B, 0x50, 0x0A, 0x22, 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAFFA: battle_message.s: BufferStringBattle
	.globl sText_LinkTrainer2WithdrewPkmn
sText_LinkTrainer2WithdrewPkmn: @ 0x085AAFFA
	@ canonical pret/pokeemerald semantic role: sText_LinkTrainer2WithdrewPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x22, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x1B, 0x50, 0x0A, 0x22, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:131 sText_WildPkmnPrefix (+1 aliases)
	.globl sText_WildPkmnPrefix
sText_WildPkmnPrefix: @ 0x085AB009
	.string "やせいの {EOS}"
	.if (. - sText_WildPkmnPrefix) > 0x6
	.error "sText_WildPkmnPrefix may not grow beyond its original slot"
	.endif
	.if (. - sText_WildPkmnPrefix) < 0x6
	.space 0x6 - (. - sText_WildPkmnPrefix)
	.endif

	@ src/battle_message.c:132 sText_FoePkmnPrefix (+1 aliases)
	.globl sText_FoePkmnPrefix
sText_FoePkmnPrefix: @ 0x085AB00F
	.string "あいての {EOS}"
	.if (. - sText_FoePkmnPrefix) > 0x6
	.error "sText_FoePkmnPrefix may not grow beyond its original slot"
	.endif
	.if (. - sText_FoePkmnPrefix) < 0x6
	.space 0x6 - (. - sText_FoePkmnPrefix)
	.endif
	.space 0x1, 0xFF

	@ src/battle_message.c:136 sText_FoePkmnPrefix2 (+2 aliases)
	.globl sText_FoePkmnPrefix2
sText_FoePkmnPrefix2: @ 0x085AB016
	.string "あいての{EOS}"
	.if (. - sText_FoePkmnPrefix2) > 0x5
	.error "sText_FoePkmnPrefix2 may not grow beyond its original slot"
	.endif
	.if (. - sText_FoePkmnPrefix2) < 0x5
	.space 0x5 - (. - sText_FoePkmnPrefix2)
	.endif

	@ src/battle_message.c:137 sText_AllyPkmnPrefix (+2 aliases)
	.globl sText_AllyPkmnPrefix
sText_AllyPkmnPrefix: @ 0x085AB01B
	.string "みかたの{EOS}"
	.if (. - sText_AllyPkmnPrefix) > 0x5
	.error "sText_AllyPkmnPrefix may not grow beyond its original slot"
	.endif
	.if (. - sText_AllyPkmnPrefix) < 0x5
	.space 0x5 - (. - sText_AllyPkmnPrefix)
	.endif

	@ src/battle_message.c:138 sText_FoePkmnPrefix3
	.globl sText_FoePkmnPrefix3
sText_FoePkmnPrefix3: @ 0x085AB020
	.string "あいては{EOS}"
	.if (. - sText_FoePkmnPrefix3) > 0x5
	.error "sText_FoePkmnPrefix3 may not grow beyond its original slot"
	.endif
	.if (. - sText_FoePkmnPrefix3) < 0x5
	.space 0x5 - (. - sText_FoePkmnPrefix3)
	.endif

	@ src/battle_message.c:139 sText_AllyPkmnPrefix2
	.globl sText_AllyPkmnPrefix2
sText_AllyPkmnPrefix2: @ 0x085AB025
	.string "みかたは{EOS}"
	.if (. - sText_AllyPkmnPrefix2) > 0x5
	.error "sText_AllyPkmnPrefix2 may not grow beyond its original slot"
	.endif
	.if (. - sText_AllyPkmnPrefix2) < 0x5
	.space 0x5 - (. - sText_AllyPkmnPrefix2)
	.endif

	@ src/battle_message.c:140 sText_FoePkmnPrefix4
	.globl sText_FoePkmnPrefix4
sText_FoePkmnPrefix4: @ 0x085AB02A
	.string "あいてを{EOS}"
	.if (. - sText_FoePkmnPrefix4) > 0x5
	.error "sText_FoePkmnPrefix4 may not grow beyond its original slot"
	.endif
	.if (. - sText_FoePkmnPrefix4) < 0x5
	.space 0x5 - (. - sText_FoePkmnPrefix4)
	.endif

	@ src/battle_message.c:141 sText_AllyPkmnPrefix3
	.globl sText_AllyPkmnPrefix3
sText_AllyPkmnPrefix3: @ 0x085AB02F
	.string "みかたを{EOS}"
	.if (. - sText_AllyPkmnPrefix3) > 0x5
	.error "sText_AllyPkmnPrefix3 may not grow beyond its original slot"
	.endif
	.if (. - sText_AllyPkmnPrefix3) < 0x5
	.space 0x5 - (. - sText_AllyPkmnPrefix3)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AB034: battle_message.s: BufferStringBattle
	.globl sText_AttackerUsedX
sText_AttackerUsedX: @ 0x085AB034
	@ canonical pret/pokeemerald semantic role: sText_AttackerUsedX
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x0F, 0xFD, 0x00, 0xFE, 0xFD, 0x01, 0xFF

	@ src/battle_message.c:143 sText_ExclamationMark
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_ExclamationMark
sText_ExclamationMark: @ 0x085AB03C
	.string "を つかった!{EOS}"
	.if (. - sText_ExclamationMark) != 0x8
	.error "sText_ExclamationMark must retain its original byte length"
	.endif
	.globl gText_Rom_5AB03F
	.set gText_Rom_5AB03F, sText_ExclamationMark + 0x3
	.globl gText_Rom_5AB044
gText_Rom_5AB044: @ 0x085AB044
	@ Decoded text from ROM range: offset=0x5AB044, size=0x4
	.string "した！{EOS}"

	@ src/battle_message.c:145 sText_ExclamationMark3
	.globl sText_ExclamationMark3
sText_ExclamationMark3: @ 0x085AB048
	.string "を した!{EOS}"
	.if (. - sText_ExclamationMark3) > 0x6
	.error "sText_ExclamationMark3 may not grow beyond its original slot"
	.endif
	.if (. - sText_ExclamationMark3) < 0x6
	.space 0x6 - (. - sText_ExclamationMark3)
	.endif

	@ src/battle_message.c:146 sText_ExclamationMark4
	.globl sText_ExclamationMark4
sText_ExclamationMark4: @ 0x085AB04E
	.string " こうげき!{EOS}"
	.if (. - sText_ExclamationMark4) > 0x7
	.error "sText_ExclamationMark4 may not grow beyond its original slot"
	.endif
	.if (. - sText_ExclamationMark4) < 0x7
	.space 0x7 - (. - sText_ExclamationMark4)
	.endif
