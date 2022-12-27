- git commit: Lưu lại nội dung hoặc những thay đổi của tất cả 
những gì đã làm được trước khi chuyển sang thực hiện công việc
khác có thể là thực hiện một commit mới, chuyển sang một branch
khác mục đích là để ta có thể truy xuất lại được nội dung của 
những file đó khi cần thiết.
- git add: Khi file vừa được thêm vào thư mục nó sẽ ở trạng
thái untracked(không xác định) phải dùng git add để xác định
file đó, một file vừa bị thay đổi nội dung cũng cần phải add
lại để cập nhật lại nổi dung sau đó mới commit đẻ lưu lại
nhưng thay đổi đó.
- git log: xem lịch sử của các commit đã được tạo.
- git show + <ID commit>: xem được lịch sử commit và những thay
đổi trong commit đó.
- git diff: xem nội dung thay đổi của nhưng file bị modify.
- git remote add <remote name> <link>: Liên kết git với github
qua link.