	@ data/maps/MtChimney/scripts.inc:807 MtChimney_Text_SheilaPostBattle
	.globl gText_Rom_21596E
gText_Rom_21596E: @ 0x0821596E
	.string "せっかく えんとつやまに きたんだから\nかんこう だけじゃ もったいないわ\pしょうぶも たのしみたいし\nおみやげに せんべい かわなきゃ!$"
	.if (. - gText_Rom_21596E) > 0x46
	.error "gText_Rom_21596E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21596E) < 0x46
	.space 0x46 - (. - gText_Rom_21596E)
	.endif
