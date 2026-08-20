	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:621 BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation
	.globl gText_Rom_227BF7
gText_Rom_227BF7: @ 0x08227BF7
	.string "バトルドームで れんぱを つづけていくと\nその うわさを ききつけて\lつよい トレーナーが あつまって くるの\pれんぱを つづけてこそ\nしんの スーパースター ね!{EOS}"
	.if (. - gText_Rom_227BF7) > 0x53
	.error "gText_Rom_227BF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227BF7) < 0x53
	.space 0x53 - (. - gText_Rom_227BF7)
	.endif
