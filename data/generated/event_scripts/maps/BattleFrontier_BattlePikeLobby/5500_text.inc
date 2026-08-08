	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:431 BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_233BC7
gText_Rom_233BC7: @ 0x08233BC7
	.string "バトルゲームの あいだは\nちょうせんする ときに きめた\lポケモンの じゅんばんを\lいれかえる ことは できません"
	.byte EOS
	.if (. - gText_Rom_233BC7) != 0x3a
	.error "gText_Rom_233BC7 must retain its original byte length"
	.endif
