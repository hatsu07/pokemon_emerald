.include "data/pokemon/level_up_learnsets.inc"

	.globl gUnknown_82F5CA4
gUnknown_82F5CA4: @ 0x082F5CA4
	.space 0x28, 0x00

	.include "data/pokemon/evolution.inc"

	.include "data/pokemon/level_up_learnset_pointers.inc"
	
	.globl gUnknown_82FA374
gUnknown_82FA374: @ 0x082FA374
	.incbin "baserom.gba", 0x2fa374, 0x19b
	.globl gUnknown_82FA50F
gUnknown_82FA50F: @ 0x082FA50F
	.incbin "baserom.gba", 0x2fa50f, 0x19b
	.globl gUnknown_82FA6AA
gUnknown_82FA6AA: @ 0x082FA6AA
	.incbin "baserom.gba", 0x2fa6aa, 0x4
	.globl gUnknown_82FA6AE
gUnknown_82FA6AE: @ 0x082FA6AE
	.incbin "baserom.gba", 0x2fa6ae, 0x4
	.globl gUnknown_82FA6B2
gUnknown_82FA6B2: @ 0x082FA6B2
	.incbin "baserom.gba", 0x2fa6b2, 0x4
	.globl gUnknown_82FA6B6
gUnknown_82FA6B6: @ 0x082FA6B6
	.incbin "baserom.gba", 0x2fa6b6, 0x20
	.globl gUnknown_82FA6D6
gUnknown_82FA6D6: @ 0x082FA6D6
	.incbin "baserom.gba", 0x2fa6d6, 0xc
	.globl gUnknown_82FA6E2
gUnknown_82FA6E2: @ 0x082FA6E2
	.incbin "baserom.gba", 0x2fa6e2, 0x20
	.globl gUnknown_82FA702
gUnknown_82FA702: @ 0x082FA702
	.incbin "baserom.gba", 0x2fa702, 0x22
	.globl gUnknown_82FA724
gUnknown_82FA724: @ 0x082FA724
	.incbin "baserom.gba", 0x2fa724, 0x60
	.globl gUnknown_82FA784
gUnknown_82FA784: @ 0x082FA784
	.incbin "baserom.gba", 0x2fa784, 0xc0
	.globl gUnknown_82FA844
gUnknown_82FA844: @ 0x082FA844
	.incbin "baserom.gba", 0x2fa844, 0xa
	.globl gUnknown_82FA84E
gUnknown_82FA84E: @ 0x082FA84E
	.incbin "baserom.gba", 0x2fa84e, 0x6
	.globl gUnknown_82FA854
gUnknown_82FA854: @ 0x082FA854
	.incbin "baserom.gba", 0x2fa854, 0x6
	.globl gUnknown_82FA85A
gUnknown_82FA85A: @ 0x082FA85A
	.incbin "baserom.gba", 0x2fa85a, 0x1c
	.globl gUnknown_82FA876
gUnknown_82FA876: @ 0x082FA876
	.incbin "baserom.gba", 0x2fa876, 0x12
	.globl gUnknown_82FA888
gUnknown_82FA888: @ 0x082FA888
	.space 0x2, 0x00
	.globl gUnknown_82FA88A
gUnknown_82FA88A: @ 0x082FA88A
	.incbin "baserom.gba", 0x2fa88a, 0x2a
	.globl gUnknown_82FA8B4
gUnknown_82FA8B4: @ 0x082FA8B4
	.incbin "baserom.gba", 0x2fa8b4, 0x18
	.globl gUnknown_82FA8CC
gUnknown_82FA8CC: @ 0x082FA8CC
	.incbin "baserom.gba", 0x2fa8cc, 0x280
	.globl gUnknown_82FAB4C
gUnknown_82FAB4C: @ 0x082FAB4C
	.incbin "baserom.gba", 0x2fab4c, 0x168
	.globl gUnknown_82FACB4
gUnknown_82FACB4: @ 0x082FACB4
	.incbin "baserom.gba", 0x2facb4, 0x80
	.globl gUnknown_82FAD34
gUnknown_82FAD34: @ 0x082FAD34
	.4byte NULL
	.4byte gDummyOamData
	.4byte gDummySpriteAnimTable
	.4byte NULL
	.4byte gDummySpriteAffineAnimTable
	.4byte SpriteCallbackDummy
	.globl gUnknown_82FAD4C
gUnknown_82FAD4C: @ 0x082FAD4C
	.incbin "baserom.gba", 0x2fad4c, 0x18
	.globl gUnknown_82FAD64
gUnknown_82FAD64: @ 0x082FAD64
	.incbin "baserom.gba", 0x2fad64, 0xa00

	.include "data/pokemon/egg_moves.inc"
	.space 0x2, 0x00

	.globl gUnknown_82FC04C
gUnknown_82FC04C: @ 0x082FC04C
	.incbin "baserom.gba", 0x2fc04c, 0x20
	.globl gUnknown_82FC06C
gUnknown_82FC06C: @ 0x082FC06C
	.incbin "baserom.gba", 0x2fc06c, 0x18

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC084
gText_Rom_2FC084: @ 0x082FC084
	.string "2ひきの　なかは\nとっても　よい　ようじゃ$"
	.if (. - gText_Rom_2FC084) > 0x16
	.error "gText_Rom_2FC084 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC084) < 0x16
	.space 0x16 - (. - gText_Rom_2FC084)
	.endif

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC09A
gText_Rom_2FC09A: @ 0x082FC09A
	.string "2ひきの　なかは\nまずまずの　ようじゃ$"
	.if (. - gText_Rom_2FC09A) > 0x14
	.error "gText_Rom_2FC09A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC09A) < 0x14
	.space 0x14 - (. - gText_Rom_2FC09A)
	.endif

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC0AE
gText_Rom_2FC0AE: @ 0x082FC0AE
	.string "2ひきの　なかは\nそれほど　よくないがなぁ$"
	.if (. - gText_Rom_2FC0AE) > 0x16
	.error "gText_Rom_2FC0AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0AE) < 0x16
	.space 0x16 - (. - gText_Rom_2FC0AE)
	.endif

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC0C4
gText_Rom_2FC0C4: @ 0x082FC0C4
	.string "2ひきは　おたがいに\nちがう　ポケモンたちと\lあそんでおるがなあ$"
	.if (. - gText_Rom_2FC0C4) > 0x21
	.error "gText_Rom_2FC0C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0C4) < 0x21
	.space 0x21 - (. - gText_Rom_2FC0C4)
	.endif
	.space 0x3, 0x00
	.globl gUnknown_82FC0E8
gUnknown_82FC0E8: @ 0x082FC0E8
	.4byte gText_Rom_2FC084
	.4byte gText_Rom_2FC09A
	.4byte gText_Rom_2FC0AE
	.4byte gText_Rom_2FC0C4
	.globl gUnknown_82FC0F8
gUnknown_82FC0F8: @ 0x082FC0F8
	.incbin "baserom.gba", 0x2fc0f8, 0x2
	.globl gUnknown_82FC0FA
gUnknown_82FC0FA: @ 0x082FC0FA

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_2FC0FA
gText_Rom_2FC0FA: @ 0x082FC0FA
	.string "やめる$"
	.if (. - gText_Rom_2FC0FA) > 0x4
	.error "gText_Rom_2FC0FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0FA) < 0x4
	.space 0x4 - (. - gText_Rom_2FC0FA)
	.endif
	.globl gUnknown_82FC0FE
gUnknown_82FC0FE: @ 0x082FC0FE
	.incbin "baserom.gba", 0x2fc0fe, 0x8de
	.globl gUnknown_82FC9DC
gUnknown_82FC9DC: @ 0x082FC9DC
	.incbin "baserom.gba", 0x2fc9dc, 0x8
	.globl gUnknown_82FC9E4
gUnknown_82FC9E4: @ 0x082FC9E4
	.incbin "baserom.gba", 0x2fc9e4, 0x8
	.globl gUnknown_82FC9EC
gUnknown_82FC9EC: @ 0x082FC9EC
	.incbin "baserom.gba", 0x2fc9ec, 0x8
	.globl gUnknown_82FC9F4
gUnknown_82FC9F4: @ 0x082FC9F4
	.incbin "baserom.gba", 0x2fc9f4, 0x50
	.globl gUnknown_82FCA44
gUnknown_82FCA44: @ 0x082FCA44
	.incbin "baserom.gba", 0x2fca44, 0x18
	.globl gUnknown_82FCA5C
gUnknown_82FCA5C: @ 0x082FCA5C
	.incbin "baserom.gba", 0x2fca5c, 0x8
	.globl gUnknown_82FCA64
gUnknown_82FCA64: @ 0x082FCA64
	.incbin "baserom.gba", 0x2fca64, 0x10
	.globl gUnknown_82FCA74
gUnknown_82FCA74: @ 0x082FCA74
	.incbin "baserom.gba", 0x2fca74, 0x8
	.globl gUnknown_82FCA7C
gUnknown_82FCA7C: @ 0x082FCA7C
	.incbin "baserom.gba", 0x2fca7c, 0x4c
	.globl gUnknown_82FCAC8
gUnknown_82FCAC8: @ 0x082FCAC8
	.incbin "baserom.gba", 0x2fcac8, 0x8
	.globl gUnknown_82FCAD0
gUnknown_82FCAD0: @ 0x082FCAD0
	.incbin "baserom.gba", 0x2fcad0, 0x8
	.globl gUnknown_82FCAD8
gUnknown_82FCAD8: @ 0x082FCAD8
	.incbin "baserom.gba", 0x2fcad8, 0x8
	.globl gUnknown_82FCAE0
gUnknown_82FCAE0: @ 0x082FCAE0
	.incbin "baserom.gba", 0x2fcae0, 0x8
	.globl gUnknown_82FCAE8
gUnknown_82FCAE8: @ 0x082FCAE8
	.incbin "baserom.gba", 0x2fcae8, 0x8
	.globl gUnknown_82FCAF0
gUnknown_82FCAF0: @ 0x082FCAF0
	.incbin "baserom.gba", 0x2fcaf0, 0x8
	.globl gUnknown_82FCAF8
gUnknown_82FCAF8: @ 0x082FCAF8
	.incbin "baserom.gba", 0x2fcaf8, 0x8
	.globl gUnknown_82FCB00
gUnknown_82FCB00: @ 0x082FCB00
	.incbin "baserom.gba", 0x2fcb00, 0x20
	.globl gUnknown_82FCB20
gUnknown_82FCB20: @ 0x082FCB20
	.incbin "baserom.gba", 0x2fcb20, 0x18
	.globl gUnknown_82FCB38
gUnknown_82FCB38: @ 0x082FCB38
	.incbin "baserom.gba", 0x2fcb38, 0x30
	.globl gUnknown_82FCB68
gUnknown_82FCB68: @ 0x082FCB68
	.incbin "baserom.gba", 0x2fcb68, 0x30
	.globl gUnknown_82FCB98
gUnknown_82FCB98: @ 0x082FCB98
	.incbin "baserom.gba", 0x2fcb98, 0x20
	.globl gUnknown_82FCBB8
gUnknown_82FCBB8: @ 0x082FCBB8
	.incbin "baserom.gba", 0x2fcbb8, 0xcc
	.globl gUnknown_82FCC84
gUnknown_82FCC84: @ 0x082FCC84
	.incbin "baserom.gba", 0x2fcc84, 0x38
	.globl gUnknown_82FCCBC
gUnknown_82FCCBC: @ 0x082FCCBC
	.incbin "baserom.gba", 0x2fccbc, 0x8
	.globl gUnknown_82FCCC4
gUnknown_82FCCC4: @ 0x082FCCC4
	.incbin "baserom.gba", 0x2fccc4, 0x68
	.globl gUnknown_82FCD2C
gUnknown_82FCD2C: @ 0x082FCD2C
	.incbin "baserom.gba", 0x2fcd2c, 0x8
	.globl gUnknown_82FCD34
gUnknown_82FCD34: @ 0x082FCD34
	.incbin "baserom.gba", 0x2fcd34, 0x8
	.globl gUnknown_82FCD3C
gUnknown_82FCD3C: @ 0x082FCD3C
	.incbin "baserom.gba", 0x2fcd3c, 0x8
	.globl gUnknown_82FCD44
gUnknown_82FCD44: @ 0x082FCD44
	.incbin "baserom.gba", 0x2fcd44, 0x18
	.globl gUnknown_82FCD5C
gUnknown_82FCD5C: @ 0x082FCD5C
	.incbin "baserom.gba", 0x2fcd5c, 0x30
	.globl gUnknown_82FCD8C
gUnknown_82FCD8C: @ 0x082FCD8C
	.incbin "baserom.gba", 0x2fcd8c, 0x30
	.globl gUnknown_82FCDBC
gUnknown_82FCDBC: @ 0x082FCDBC
	.incbin "baserom.gba", 0x2fcdbc, 0x1e
	.globl gUnknown_82FCDDA
gUnknown_82FCDDA: @ 0x082FCDDA
	.incbin "baserom.gba", 0x2fcdda, 0x14
	.globl gUnknown_82FCDEE
gUnknown_82FCDEE: @ 0x082FCDEE
	.incbin "baserom.gba", 0x2fcdee, 0x14
	.globl gUnknown_82FCE02
gUnknown_82FCE02: @ 0x082FCE02
	.incbin "baserom.gba", 0x2fce02, 0xa
