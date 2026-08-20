	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:282 BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody
	.globl gText_Rom_222EAA
gText_Rom_222EAA: @ 0x08222EAA
	.string "お おれは でしゃばり だ!\nオイあんた! ぼうしが ずれてるぜ!\lおっと じめんに ゴミが おちてる!\lああっと! もうすぐ ごはんだぜ!\p…… ……バトルパレスで\nしょうぶを ただ みまもる だけなんて\lおれに できるだろーか……?{EOS}"
	.if (. - gText_Rom_222EAA) > 0x77
	.error "gText_Rom_222EAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222EAA) < 0x77
	.space 0x77 - (. - gText_Rom_222EAA)
	.endif
