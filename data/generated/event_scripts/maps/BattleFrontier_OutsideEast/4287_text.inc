	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:264 BattleFrontier_OutsideEast_Text_PyramidTooHarsh
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_222D08
gText_Rom_222D08: @ 0x08222D08
	.string "バトルピラミッドは むずかし すぎて\nどうしても ちょうじょうに まで いけん!\pしかたが ないから いっそのこと\nそとがわを のぼって やろうかしら{EOS}"
	.if (. - gText_Rom_222D08) != 0x4c
	.error "gText_Rom_222D08 must retain its original byte length"
	.endif
