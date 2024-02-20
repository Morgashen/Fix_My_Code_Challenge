###
#
#  Sort integer arguments (ascending) 
#
###

result = []
ARGV.each do |arg|
  # try to convert to integer
  i_arg = Integer(arg)
  # append to result array
  result << i_arg
rescue ArgumentError
  # skip if not integer
  next
end

# sort the result array
result.sort!

# print the result array
p result
