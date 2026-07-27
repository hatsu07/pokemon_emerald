.include "data/pokemon/level_up_learnsets.inc"

	.globl gUnknown_82F5CA4
gUnknown_82F5CA4: @ 0x082F5CA4
	.incbin "baserom.gba", 0x2f5ca4, 0x28

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
	.incbin "baserom.gba", 0x2fa888, 0x2
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
	.incbin "baserom.gba", 0x2fad34, 0x18
	.globl gUnknown_82FAD4C
gUnknown_82FAD4C: @ 0x082FAD4C
	.incbin "baserom.gba", 0x2fad4c, 0x18
	.globl gUnknown_82FAD64
gUnknown_82FAD64: @ 0x082FAD64
	.incbin "baserom.gba", 0x2fad64, 0xa00

	.include "data/pokemon/egg_moves.inc"
	.incbin "baserom.gba", 0x2fc04a, 0x2

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
	.incbin "baserom.gba", 0x2fc0e5, 0x3
	.globl gUnknown_82FC0E8
gUnknown_82FC0E8: @ 0x082FC0E8
	.incbin "baserom.gba", 0x2fc0e8, 0x10
	.globl gUnknown_82FC0F8
gUnknown_82FC0F8: @ 0x082FC0F8
	.incbin "baserom.gba", 0x2fc0f8, 0x2
	.globl gUnknown_82FC0FA
gUnknown_82FC0FA: @ 0x082FC0FA
	