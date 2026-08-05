	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:992 BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded
	.globl gText_Rom_220896
gText_Rom_220896: @ 0x08220896
	.string "かちぬいた トレーナーの にんずうは\nきろく されて いるのよ!\pはずかしく ない たたかいを\nしなきゃ……!"
	.byte EOS
	.if (. - gText_Rom_220896) > 0x38
	.error "gText_Rom_220896 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220896) < 0x38
	.space 0x38 - (. - gText_Rom_220896)
	.endif
