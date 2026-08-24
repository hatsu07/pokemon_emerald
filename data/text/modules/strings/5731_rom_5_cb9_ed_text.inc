	@ src/strings.c:568 gText_TheTrainersImage
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_TheTrainersImage
gText_TheTrainersImage: @ 0x085CB9ED
	.string "ぴったりの ことばを みつけよう!{EOS}"
	.if (. - gText_TheTrainersImage) != 0x12
	.error "gText_TheTrainersImage must retain its original byte length"
	.endif
